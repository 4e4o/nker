/* parser auto-generated by pidl */

#include "includes.h"
#include "librpc/gen_ndr/ndr_libnetapi.h"

_PUBLIC_ enum ndr_err_code ndr_push_NET_API_STATUS(struct ndr_push *ndr, int ndr_flags, enum NET_API_STATUS r)
{
	NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r));
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_NET_API_STATUS(struct ndr_pull *ndr, int ndr_flags, enum NET_API_STATUS *r)
{
	uint32_t v;
	NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &v));
	*r = v;
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_NET_API_STATUS(struct ndr_print *ndr, const char *name, enum NET_API_STATUS r)
{
	const char *val = NULL;

	switch (r) {
		case NERR_Success: val = "NERR_Success"; break;
	}
	ndr_print_enum(ndr, name, "ENUM", val, r);
}

_PUBLIC_ enum ndr_err_code ndr_push_SERVER_INFO_1005(struct ndr_push *ndr, int ndr_flags, const struct SERVER_INFO_1005 *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->sv1005_comment));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_SERVER_INFO_1005(struct ndr_pull *ndr, int ndr_flags, struct SERVER_INFO_1005 *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->sv1005_comment));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_SERVER_INFO_1005(struct ndr_print *ndr, const char *name, const struct SERVER_INFO_1005 *r)
{
	ndr_print_struct(ndr, name, "SERVER_INFO_1005");
	ndr->depth++;
	ndr_print_string(ndr, "sv1005_comment", r->sv1005_comment);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_DOMAIN_CONTROLLER_INFO(struct ndr_push *ndr, int ndr_flags, const struct DOMAIN_CONTROLLER_INFO *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->domain_controller_name));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->domain_controller_address));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->domain_controller_address_type));
		NDR_CHECK(ndr_push_GUID(ndr, NDR_SCALARS, &r->domain_guid));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->domain_name));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->dns_forest_name));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->flags));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->dc_site_name));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->client_site_name));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_DOMAIN_CONTROLLER_INFO(struct ndr_pull *ndr, int ndr_flags, struct DOMAIN_CONTROLLER_INFO *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->domain_controller_name));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->domain_controller_address));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->domain_controller_address_type));
		NDR_CHECK(ndr_pull_GUID(ndr, NDR_SCALARS, &r->domain_guid));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->domain_name));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->dns_forest_name));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->flags));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->dc_site_name));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->client_site_name));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_DOMAIN_CONTROLLER_INFO(struct ndr_print *ndr, const char *name, const struct DOMAIN_CONTROLLER_INFO *r)
{
	ndr_print_struct(ndr, name, "DOMAIN_CONTROLLER_INFO");
	ndr->depth++;
	ndr_print_string(ndr, "domain_controller_name", r->domain_controller_name);
	ndr_print_string(ndr, "domain_controller_address", r->domain_controller_address);
	ndr_print_uint32(ndr, "domain_controller_address_type", r->domain_controller_address_type);
	ndr_print_GUID(ndr, "domain_guid", &r->domain_guid);
	ndr_print_string(ndr, "domain_name", r->domain_name);
	ndr_print_string(ndr, "dns_forest_name", r->dns_forest_name);
	ndr_print_uint32(ndr, "flags", r->flags);
	ndr_print_string(ndr, "dc_site_name", r->dc_site_name);
	ndr_print_string(ndr, "client_site_name", r->client_site_name);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_USER_INFO_0(struct ndr_push *ndr, int ndr_flags, const struct USER_INFO_0 *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->usri0_name));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_USER_INFO_0(struct ndr_pull *ndr, int ndr_flags, struct USER_INFO_0 *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->usri0_name));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_USER_INFO_0(struct ndr_print *ndr, const char *name, const struct USER_INFO_0 *r)
{
	ndr_print_struct(ndr, name, "USER_INFO_0");
	ndr->depth++;
	ndr_print_string(ndr, "usri0_name", r->usri0_name);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_USER_INFO_1(struct ndr_push *ndr, int ndr_flags, const struct USER_INFO_1 *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->usri1_name));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->usri1_password));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->usri1_password_age));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->usri1_priv));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->usri1_home_dir));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->usri1_comment));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->usri1_flags));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->usri1_script_path));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_USER_INFO_1(struct ndr_pull *ndr, int ndr_flags, struct USER_INFO_1 *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->usri1_name));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->usri1_password));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->usri1_password_age));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->usri1_priv));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->usri1_home_dir));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->usri1_comment));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->usri1_flags));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->usri1_script_path));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_USER_INFO_1(struct ndr_print *ndr, const char *name, const struct USER_INFO_1 *r)
{
	ndr_print_struct(ndr, name, "USER_INFO_1");
	ndr->depth++;
	ndr_print_string(ndr, "usri1_name", r->usri1_name);
	ndr_print_string(ndr, "usri1_password", r->usri1_password);
	ndr_print_uint32(ndr, "usri1_password_age", r->usri1_password_age);
	ndr_print_uint32(ndr, "usri1_priv", r->usri1_priv);
	ndr_print_string(ndr, "usri1_home_dir", r->usri1_home_dir);
	ndr_print_string(ndr, "usri1_comment", r->usri1_comment);
	ndr_print_uint32(ndr, "usri1_flags", r->usri1_flags);
	ndr_print_string(ndr, "usri1_script_path", r->usri1_script_path);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_NET_DISPLAY_USER(struct ndr_push *ndr, int ndr_flags, const struct NET_DISPLAY_USER *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->usri1_name));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->usri1_comment));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->usri1_flags));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->usri1_full_name));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->usri1_user_id));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->usri1_next_index));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_NET_DISPLAY_USER(struct ndr_pull *ndr, int ndr_flags, struct NET_DISPLAY_USER *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->usri1_name));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->usri1_comment));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->usri1_flags));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->usri1_full_name));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->usri1_user_id));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->usri1_next_index));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_NET_DISPLAY_USER(struct ndr_print *ndr, const char *name, const struct NET_DISPLAY_USER *r)
{
	ndr_print_struct(ndr, name, "NET_DISPLAY_USER");
	ndr->depth++;
	ndr_print_string(ndr, "usri1_name", r->usri1_name);
	ndr_print_string(ndr, "usri1_comment", r->usri1_comment);
	ndr_print_uint32(ndr, "usri1_flags", r->usri1_flags);
	ndr_print_string(ndr, "usri1_full_name", r->usri1_full_name);
	ndr_print_uint32(ndr, "usri1_user_id", r->usri1_user_id);
	ndr_print_uint32(ndr, "usri1_next_index", r->usri1_next_index);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_NET_DISPLAY_MACHINE(struct ndr_push *ndr, int ndr_flags, const struct NET_DISPLAY_MACHINE *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->usri2_name));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->usri2_comment));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->usri2_flags));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->usri2_user_id));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->usri2_next_index));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_NET_DISPLAY_MACHINE(struct ndr_pull *ndr, int ndr_flags, struct NET_DISPLAY_MACHINE *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->usri2_name));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->usri2_comment));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->usri2_flags));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->usri2_user_id));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->usri2_next_index));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_NET_DISPLAY_MACHINE(struct ndr_print *ndr, const char *name, const struct NET_DISPLAY_MACHINE *r)
{
	ndr_print_struct(ndr, name, "NET_DISPLAY_MACHINE");
	ndr->depth++;
	ndr_print_string(ndr, "usri2_name", r->usri2_name);
	ndr_print_string(ndr, "usri2_comment", r->usri2_comment);
	ndr_print_uint32(ndr, "usri2_flags", r->usri2_flags);
	ndr_print_uint32(ndr, "usri2_user_id", r->usri2_user_id);
	ndr_print_uint32(ndr, "usri2_next_index", r->usri2_next_index);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_NET_DISPLAY_GROUP(struct ndr_push *ndr, int ndr_flags, const struct NET_DISPLAY_GROUP *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 4));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->grpi3_name));
		NDR_CHECK(ndr_push_string(ndr, NDR_SCALARS, r->grpi3_comment));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->grpi3_group_id));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->grpi3_attributes));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->grpi3_next_index));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_NET_DISPLAY_GROUP(struct ndr_pull *ndr, int ndr_flags, struct NET_DISPLAY_GROUP *r)
{
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 4));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->grpi3_name));
		NDR_CHECK(ndr_pull_string(ndr, NDR_SCALARS, &r->grpi3_comment));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->grpi3_group_id));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->grpi3_attributes));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->grpi3_next_index));
	}
	if (ndr_flags & NDR_BUFFERS) {
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_NET_DISPLAY_GROUP(struct ndr_print *ndr, const char *name, const struct NET_DISPLAY_GROUP *r)
{
	ndr_print_struct(ndr, name, "NET_DISPLAY_GROUP");
	ndr->depth++;
	ndr_print_string(ndr, "grpi3_name", r->grpi3_name);
	ndr_print_string(ndr, "grpi3_comment", r->grpi3_comment);
	ndr_print_uint32(ndr, "grpi3_group_id", r->grpi3_group_id);
	ndr_print_uint32(ndr, "grpi3_attributes", r->grpi3_attributes);
	ndr_print_uint32(ndr, "grpi3_next_index", r->grpi3_next_index);
	ndr->depth--;
}

_PUBLIC_ void ndr_print_NetJoinDomain(struct ndr_print *ndr, const char *name, int flags, const struct NetJoinDomain *r)
{
	ndr_print_struct(ndr, name, "NetJoinDomain");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "NetJoinDomain");
		ndr->depth++;
		ndr_print_ptr(ndr, "server", r->in.server);
		ndr->depth++;
		if (r->in.server) {
			ndr_print_string(ndr, "server", r->in.server);
		}
		ndr->depth--;
		ndr_print_ptr(ndr, "domain", r->in.domain);
		ndr->depth++;
		ndr_print_string(ndr, "domain", r->in.domain);
		ndr->depth--;
		ndr_print_ptr(ndr, "account_ou", r->in.account_ou);
		ndr->depth++;
		if (r->in.account_ou) {
			ndr_print_string(ndr, "account_ou", r->in.account_ou);
		}
		ndr->depth--;
		ndr_print_ptr(ndr, "account", r->in.account);
		ndr->depth++;
		if (r->in.account) {
			ndr_print_string(ndr, "account", r->in.account);
		}
		ndr->depth--;
		ndr_print_ptr(ndr, "password", r->in.password);
		ndr->depth++;
		if (r->in.password) {
			ndr_print_string(ndr, "password", r->in.password);
		}
		ndr->depth--;
		ndr_print_uint32(ndr, "join_flags", r->in.join_flags);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "NetJoinDomain");
		ndr->depth++;
		ndr_print_NET_API_STATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

_PUBLIC_ void ndr_print_NetUnjoinDomain(struct ndr_print *ndr, const char *name, int flags, const struct NetUnjoinDomain *r)
{
	ndr_print_struct(ndr, name, "NetUnjoinDomain");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "NetUnjoinDomain");
		ndr->depth++;
		ndr_print_ptr(ndr, "server_name", r->in.server_name);
		ndr->depth++;
		if (r->in.server_name) {
			ndr_print_string(ndr, "server_name", r->in.server_name);
		}
		ndr->depth--;
		ndr_print_ptr(ndr, "account", r->in.account);
		ndr->depth++;
		if (r->in.account) {
			ndr_print_string(ndr, "account", r->in.account);
		}
		ndr->depth--;
		ndr_print_ptr(ndr, "password", r->in.password);
		ndr->depth++;
		if (r->in.password) {
			ndr_print_string(ndr, "password", r->in.password);
		}
		ndr->depth--;
		ndr_print_uint32(ndr, "unjoin_flags", r->in.unjoin_flags);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "NetUnjoinDomain");
		ndr->depth++;
		ndr_print_NET_API_STATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

_PUBLIC_ void ndr_print_NetGetJoinInformation(struct ndr_print *ndr, const char *name, int flags, const struct NetGetJoinInformation *r)
{
	ndr_print_struct(ndr, name, "NetGetJoinInformation");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "NetGetJoinInformation");
		ndr->depth++;
		ndr_print_ptr(ndr, "server_name", r->in.server_name);
		ndr->depth++;
		if (r->in.server_name) {
			ndr_print_string(ndr, "server_name", r->in.server_name);
		}
		ndr->depth--;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "NetGetJoinInformation");
		ndr->depth++;
		ndr_print_ptr(ndr, "name_buffer", r->out.name_buffer);
		ndr->depth++;
		ndr_print_ptr(ndr, "name_buffer", *r->out.name_buffer);
		ndr->depth++;
		if (*r->out.name_buffer) {
			ndr_print_string(ndr, "name_buffer", *r->out.name_buffer);
		}
		ndr->depth--;
		ndr->depth--;
		ndr_print_ptr(ndr, "name_type", r->out.name_type);
		ndr->depth++;
		ndr_print_uint16(ndr, "name_type", *r->out.name_type);
		ndr->depth--;
		ndr_print_NET_API_STATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

_PUBLIC_ void ndr_print_NetGetJoinableOUs(struct ndr_print *ndr, const char *name, int flags, const struct NetGetJoinableOUs *r)
{
	ndr_print_struct(ndr, name, "NetGetJoinableOUs");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "NetGetJoinableOUs");
		ndr->depth++;
		ndr_print_ptr(ndr, "server_name", r->in.server_name);
		ndr->depth++;
		if (r->in.server_name) {
			ndr_print_string(ndr, "server_name", r->in.server_name);
		}
		ndr->depth--;
		ndr_print_ptr(ndr, "domain", r->in.domain);
		ndr->depth++;
		ndr_print_string(ndr, "domain", r->in.domain);
		ndr->depth--;
		ndr_print_ptr(ndr, "account", r->in.account);
		ndr->depth++;
		if (r->in.account) {
			ndr_print_string(ndr, "account", r->in.account);
		}
		ndr->depth--;
		ndr_print_ptr(ndr, "password", r->in.password);
		ndr->depth++;
		if (r->in.password) {
			ndr_print_string(ndr, "password", r->in.password);
		}
		ndr->depth--;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "NetGetJoinableOUs");
		ndr->depth++;
		ndr_print_ptr(ndr, "ou_count", r->out.ou_count);
		ndr->depth++;
		ndr_print_uint32(ndr, "ou_count", *r->out.ou_count);
		ndr->depth--;
		ndr_print_ptr(ndr, "ous", r->out.ous);
		ndr->depth++;
		ndr_print_ptr(ndr, "ous", *r->out.ous);
		ndr->depth++;
		if (*r->out.ous) {
			ndr_print_ptr(ndr, "ous", **r->out.ous);
			ndr->depth++;
			if (**r->out.ous) {
				ndr_print_string(ndr, "ous", **r->out.ous);
			}
			ndr->depth--;
		}
		ndr->depth--;
		ndr->depth--;
		ndr_print_NET_API_STATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

_PUBLIC_ void ndr_print_NetServerGetInfo(struct ndr_print *ndr, const char *name, int flags, const struct NetServerGetInfo *r)
{
	ndr_print_struct(ndr, name, "NetServerGetInfo");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "NetServerGetInfo");
		ndr->depth++;
		ndr_print_ptr(ndr, "server_name", r->in.server_name);
		ndr->depth++;
		if (r->in.server_name) {
			ndr_print_string(ndr, "server_name", r->in.server_name);
		}
		ndr->depth--;
		ndr_print_uint32(ndr, "level", r->in.level);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "NetServerGetInfo");
		ndr->depth++;
		ndr_print_ptr(ndr, "buffer", r->out.buffer);
		ndr->depth++;
		ndr_print_ptr(ndr, "buffer", *r->out.buffer);
		ndr->depth++;
		if (*r->out.buffer) {
			ndr_print_uint8(ndr, "buffer", **r->out.buffer);
		}
		ndr->depth--;
		ndr->depth--;
		ndr_print_NET_API_STATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

_PUBLIC_ void ndr_print_NetServerSetInfo(struct ndr_print *ndr, const char *name, int flags, const struct NetServerSetInfo *r)
{
	ndr_print_struct(ndr, name, "NetServerSetInfo");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "NetServerSetInfo");
		ndr->depth++;
		ndr_print_ptr(ndr, "server_name", r->in.server_name);
		ndr->depth++;
		if (r->in.server_name) {
			ndr_print_string(ndr, "server_name", r->in.server_name);
		}
		ndr->depth--;
		ndr_print_uint32(ndr, "level", r->in.level);
		ndr_print_ptr(ndr, "buffer", r->in.buffer);
		ndr->depth++;
		ndr_print_uint8(ndr, "buffer", *r->in.buffer);
		ndr->depth--;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "NetServerSetInfo");
		ndr->depth++;
		ndr_print_ptr(ndr, "parm_error", r->out.parm_error);
		ndr->depth++;
		ndr_print_uint32(ndr, "parm_error", *r->out.parm_error);
		ndr->depth--;
		ndr_print_NET_API_STATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

_PUBLIC_ void ndr_print_NetGetDCName(struct ndr_print *ndr, const char *name, int flags, const struct NetGetDCName *r)
{
	ndr_print_struct(ndr, name, "NetGetDCName");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "NetGetDCName");
		ndr->depth++;
		ndr_print_ptr(ndr, "server_name", r->in.server_name);
		ndr->depth++;
		if (r->in.server_name) {
			ndr_print_string(ndr, "server_name", r->in.server_name);
		}
		ndr->depth--;
		ndr_print_ptr(ndr, "domain_name", r->in.domain_name);
		ndr->depth++;
		if (r->in.domain_name) {
			ndr_print_string(ndr, "domain_name", r->in.domain_name);
		}
		ndr->depth--;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "NetGetDCName");
		ndr->depth++;
		ndr_print_ptr(ndr, "buffer", r->out.buffer);
		ndr->depth++;
		ndr_print_ptr(ndr, "buffer", *r->out.buffer);
		ndr->depth++;
		if (*r->out.buffer) {
			ndr_print_uint8(ndr, "buffer", **r->out.buffer);
		}
		ndr->depth--;
		ndr->depth--;
		ndr_print_NET_API_STATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

_PUBLIC_ void ndr_print_NetGetAnyDCName(struct ndr_print *ndr, const char *name, int flags, const struct NetGetAnyDCName *r)
{
	ndr_print_struct(ndr, name, "NetGetAnyDCName");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "NetGetAnyDCName");
		ndr->depth++;
		ndr_print_ptr(ndr, "server_name", r->in.server_name);
		ndr->depth++;
		if (r->in.server_name) {
			ndr_print_string(ndr, "server_name", r->in.server_name);
		}
		ndr->depth--;
		ndr_print_ptr(ndr, "domain_name", r->in.domain_name);
		ndr->depth++;
		if (r->in.domain_name) {
			ndr_print_string(ndr, "domain_name", r->in.domain_name);
		}
		ndr->depth--;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "NetGetAnyDCName");
		ndr->depth++;
		ndr_print_ptr(ndr, "buffer", r->out.buffer);
		ndr->depth++;
		ndr_print_ptr(ndr, "buffer", *r->out.buffer);
		ndr->depth++;
		if (*r->out.buffer) {
			ndr_print_uint8(ndr, "buffer", **r->out.buffer);
		}
		ndr->depth--;
		ndr->depth--;
		ndr_print_NET_API_STATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

_PUBLIC_ void ndr_print_DsGetDcName(struct ndr_print *ndr, const char *name, int flags, const struct DsGetDcName *r)
{
	ndr_print_struct(ndr, name, "DsGetDcName");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "DsGetDcName");
		ndr->depth++;
		ndr_print_ptr(ndr, "server_name", r->in.server_name);
		ndr->depth++;
		if (r->in.server_name) {
			ndr_print_string(ndr, "server_name", r->in.server_name);
		}
		ndr->depth--;
		ndr_print_ptr(ndr, "domain_name", r->in.domain_name);
		ndr->depth++;
		ndr_print_string(ndr, "domain_name", r->in.domain_name);
		ndr->depth--;
		ndr_print_ptr(ndr, "domain_guid", r->in.domain_guid);
		ndr->depth++;
		if (r->in.domain_guid) {
			ndr_print_GUID(ndr, "domain_guid", r->in.domain_guid);
		}
		ndr->depth--;
		ndr_print_ptr(ndr, "site_name", r->in.site_name);
		ndr->depth++;
		if (r->in.site_name) {
			ndr_print_string(ndr, "site_name", r->in.site_name);
		}
		ndr->depth--;
		ndr_print_uint32(ndr, "flags", r->in.flags);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "DsGetDcName");
		ndr->depth++;
		ndr_print_ptr(ndr, "dc_info", r->out.dc_info);
		ndr->depth++;
		ndr_print_ptr(ndr, "dc_info", *r->out.dc_info);
		ndr->depth++;
		if (*r->out.dc_info) {
			ndr_print_DOMAIN_CONTROLLER_INFO(ndr, "dc_info", *r->out.dc_info);
		}
		ndr->depth--;
		ndr->depth--;
		ndr_print_NET_API_STATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

#if 0 /* tonywu */
_PUBLIC_ void ndr_print_NetUserAdd(struct ndr_print *ndr, const char *name, int flags, const struct NetUserAdd *r)
{
	ndr_print_struct(ndr, name, "NetUserAdd");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "NetUserAdd");
		ndr->depth++;
		ndr_print_ptr(ndr, "server_name", r->in.server_name);
		ndr->depth++;
		if (r->in.server_name) {
			ndr_print_string(ndr, "server_name", r->in.server_name);
		}
		ndr->depth--;
		ndr_print_uint32(ndr, "level", r->in.level);
		ndr_print_ptr(ndr, "buffer", r->in.buffer);
		ndr->depth++;
		ndr_print_uint8(ndr, "buffer", *r->in.buffer);
		ndr->depth--;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "NetUserAdd");
		ndr->depth++;
		ndr_print_ptr(ndr, "parm_error", r->out.parm_error);
		ndr->depth++;
		ndr_print_uint32(ndr, "parm_error", *r->out.parm_error);
		ndr->depth--;
		ndr_print_NET_API_STATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

_PUBLIC_ void ndr_print_NetUserDel(struct ndr_print *ndr, const char *name, int flags, const struct NetUserDel *r)
{
	ndr_print_struct(ndr, name, "NetUserDel");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "NetUserDel");
		ndr->depth++;
		ndr_print_ptr(ndr, "server_name", r->in.server_name);
		ndr->depth++;
		if (r->in.server_name) {
			ndr_print_string(ndr, "server_name", r->in.server_name);
		}
		ndr->depth--;
		ndr_print_ptr(ndr, "user_name", r->in.user_name);
		ndr->depth++;
		ndr_print_string(ndr, "user_name", r->in.user_name);
		ndr->depth--;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "NetUserDel");
		ndr->depth++;
		ndr_print_NET_API_STATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

_PUBLIC_ void ndr_print_NetUserEnum(struct ndr_print *ndr, const char *name, int flags, const struct NetUserEnum *r)
{
	ndr_print_struct(ndr, name, "NetUserEnum");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "NetUserEnum");
		ndr->depth++;
		ndr_print_ptr(ndr, "server_name", r->in.server_name);
		ndr->depth++;
		if (r->in.server_name) {
			ndr_print_string(ndr, "server_name", r->in.server_name);
		}
		ndr->depth--;
		ndr_print_uint32(ndr, "level", r->in.level);
		ndr_print_uint32(ndr, "filter", r->in.filter);
		ndr_print_uint32(ndr, "prefmaxlen", r->in.prefmaxlen);
		ndr_print_ptr(ndr, "resume_handle", r->in.resume_handle);
		ndr->depth++;
		ndr_print_uint32(ndr, "resume_handle", *r->in.resume_handle);
		ndr->depth--;
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "NetUserEnum");
		ndr->depth++;
		ndr_print_ptr(ndr, "buffer", r->out.buffer);
		ndr->depth++;
		ndr_print_ptr(ndr, "buffer", *r->out.buffer);
		ndr->depth++;
		if (*r->out.buffer) {
			ndr_print_uint8(ndr, "buffer", **r->out.buffer);
		}
		ndr->depth--;
		ndr->depth--;
		ndr_print_ptr(ndr, "entries_read", r->out.entries_read);
		ndr->depth++;
		ndr_print_uint32(ndr, "entries_read", *r->out.entries_read);
		ndr->depth--;
		ndr_print_ptr(ndr, "total_entries", r->out.total_entries);
		ndr->depth++;
		ndr_print_uint32(ndr, "total_entries", *r->out.total_entries);
		ndr->depth--;
		ndr_print_ptr(ndr, "resume_handle", r->out.resume_handle);
		ndr->depth++;
		ndr_print_uint32(ndr, "resume_handle", *r->out.resume_handle);
		ndr->depth--;
		ndr_print_NET_API_STATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}
#endif

_PUBLIC_ void ndr_print_NetQueryDisplayInformation(struct ndr_print *ndr, const char *name, int flags, const struct NetQueryDisplayInformation *r)
{
	ndr_print_struct(ndr, name, "NetQueryDisplayInformation");
	ndr->depth++;
	if (flags & NDR_SET_VALUES) {
		ndr->flags |= LIBNDR_PRINT_SET_VALUES;
	}
	if (flags & NDR_IN) {
		ndr_print_struct(ndr, "in", "NetQueryDisplayInformation");
		ndr->depth++;
		ndr_print_ptr(ndr, "server_name", r->in.server_name);
		ndr->depth++;
		if (r->in.server_name) {
			ndr_print_string(ndr, "server_name", r->in.server_name);
		}
		ndr->depth--;
		ndr_print_uint32(ndr, "level", r->in.level);
		ndr_print_uint32(ndr, "idx", r->in.idx);
		ndr_print_uint32(ndr, "entries_requested", r->in.entries_requested);
		ndr_print_uint32(ndr, "prefmaxlen", r->in.prefmaxlen);
		ndr->depth--;
	}
	if (flags & NDR_OUT) {
		ndr_print_struct(ndr, "out", "NetQueryDisplayInformation");
		ndr->depth++;
		ndr_print_ptr(ndr, "entries_read", r->out.entries_read);
		ndr->depth++;
		ndr_print_uint32(ndr, "entries_read", *r->out.entries_read);
		ndr->depth--;
		ndr_print_NET_API_STATUS(ndr, "result", r->out.result);
		ndr->depth--;
	}
	ndr->depth--;
}

