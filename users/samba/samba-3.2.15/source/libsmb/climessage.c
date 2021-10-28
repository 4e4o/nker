/* 
   Unix SMB/CIFS implementation.
   client message handling routines
   Copyright (C) Andrew Tridgell 1994-1998
   
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "includes.h"

/****************************************************************************
 Start a message sequence.
****************************************************************************/

int cli_message_start_build(struct cli_state *cli, const char *host, const char *username)
{
	char *p;

	/* construct a SMBsendstrt command */
	memset(cli->outbuf,'\0',smb_size);
	cli_set_message(cli->outbuf,0,0,True);
	SCVAL(cli->outbuf,smb_com,SMBsendstrt);
	SSVAL(cli->outbuf,smb_tid,cli->cnum);
	cli_setup_packet(cli);

	p = smb_buf(cli->outbuf);
	*p++ = 4;
	p += clistr_push(cli, p, username,
			cli->bufsize - PTR_DIFF(p,cli->outbuf), STR_ASCII|STR_TERMINATE);
	*p++ = 4;
	p += clistr_push(cli, p, host,
			cli->bufsize - PTR_DIFF(p,cli->outbuf), STR_ASCII|STR_TERMINATE);

	cli_setup_bcc(cli, p);

	return(PTR_DIFF(p, cli->outbuf));
}

bool cli_message_start(struct cli_state *cli, const char *host, const char *username,
			      int *grp)
{
	cli_message_start_build(cli, host, username);
	cli_send_smb(cli);

	if (!cli_receive_smb(cli)) {
		return False;
	}

	if (cli_is_error(cli)) return False;

	*grp = SVAL(cli->inbuf,smb_vwv0);

	return True;
}

/****************************************************************************
 Send a message
****************************************************************************/

int cli_message_text_build(struct cli_state *cli, const char *msg, int len, int grp)
{
	char *msgdos;
	size_t lendos;
	char *p;

	memset(cli->outbuf,'\0',smb_size);
	cli_set_message(cli->outbuf,1,0,True);
	SCVAL(cli->outbuf,smb_com,SMBsendtxt);
	SSVAL(cli->outbuf,smb_tid,cli->cnum);
	cli_setup_packet(cli);

	SSVAL(cli->outbuf,smb_vwv0,grp);

	p = smb_buf(cli->outbuf);
	*p++ = 1;

	if (!convert_string_allocate(NULL, CH_UNIX, CH_DOS, msg, len,
		(void **)(void *)&msgdos, &lendos, True) || !msgdos) {
		DEBUG(3,("Conversion failed, sending message in UNIX charset\n"));
		SSVAL(p, 0, len); p += 2;
		if (len > cli->bufsize - PTR_DIFF(p,cli->outbuf)) {
			return -1;
		}
		memcpy(p, msg, len);
		p += len;
	} else {
		SSVAL(p, 0, lendos); p += 2;
		if (lendos > cli->bufsize - PTR_DIFF(p,cli->outbuf)) {
			return -1;
		}
		memcpy(p, msgdos, lendos);
		p += lendos;
		SAFE_FREE(msgdos);
	}

	cli_setup_bcc(cli, p);

	return(PTR_DIFF(p, cli->outbuf));
}

bool cli_message_text(struct cli_state *cli, const char *msg, int len, int grp)
{
	cli_message_text_build(cli, msg, len, grp);

	cli_send_smb(cli);

	if (!cli_receive_smb(cli)) {
		return False;
	}

	if (cli_is_error(cli)) return False;

	return True;
}

/****************************************************************************
 End a message.
****************************************************************************/

int cli_message_end_build(struct cli_state *cli, int grp)
{
	char *p;

	memset(cli->outbuf,'\0',smb_size);
	cli_set_message(cli->outbuf,1,0,True);
	SCVAL(cli->outbuf,smb_com,SMBsendend);
	SSVAL(cli->outbuf,smb_tid,cli->cnum);

	SSVAL(cli->outbuf,smb_vwv0,grp);

	cli_setup_packet(cli);

	p = smb_buf(cli->outbuf);

	return(PTR_DIFF(p, cli->outbuf));
}

bool cli_message_end(struct cli_state *cli, int grp)
{
	cli_message_end_build(cli, grp);

	cli_send_smb(cli);

	if (!cli_receive_smb(cli)) {
		return False;
	}

	if (cli_is_error(cli)) return False;

	return True;
}
