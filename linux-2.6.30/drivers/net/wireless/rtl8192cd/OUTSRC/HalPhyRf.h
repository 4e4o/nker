/******************************************************************************
 *
 * Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 *
 ******************************************************************************/
 
 #ifndef __HAL_PHY_RF_H__
 #define __HAL_PHY_RF_H__
 

typedef enum _PWRTRACK_CONTROL_METHOD {
	BBSWING,
	TXAGC
} PWRTRACK_METHOD;

typedef VOID (*FuncSetPwr)(PDM_ODM_T, PWRTRACK_METHOD, u1Byte, u1Byte);
typedef VOID (*FuncIQK)(PDM_ODM_T, u1Byte, u1Byte, u1Byte);
typedef VOID (*FuncLCK)(PDM_ODM_T);

typedef struct _TXPWRTRACK_CFG {
	u1Byte 		SwingTableSize_CCK;	
	u1Byte 		SwingTableSize_OFDM;
	u1Byte 		Threshold_IQK;	
	u1Byte 		AverageThermalNum;
	u1Byte 		RfPathCount;
	u4Byte 		ThermalRegAddr;	
	FuncSetPwr 	ODM_TxPwrTrackSetPwr;
	FuncIQK 	DoIQK;
	FuncLCK		PHY_LCCalibrate;
} TXPWRTRACK_CFG, *PTXPWRTRACK_CFG;


VOID
ODM_TXPowerTrackingCallback_ThermalMeter(
#if (DM_ODM_SUPPORT_TYPE & ODM_AP)
	IN PDM_ODM_T		pDM_Odm
#else
	IN PADAPTER	Adapter
#endif
	);

#if (RTL8192E_SUPPORT==1) 
VOID
ODM_TXPowerTrackingCallback_ThermalMeter_92E(
#if (DM_ODM_SUPPORT_TYPE & ODM_AP)
	IN PDM_ODM_T		pDM_Odm
#else
	IN PADAPTER	Adapter
#endif
	);
#endif

#if ODM_IC_11AC_SERIES_SUPPORT
VOID
ODM_TXPowerTrackingCallback_ThermalMeter_JaguarSeries(
#if (DM_ODM_SUPPORT_TYPE & ODM_AP)
	IN PDM_ODM_T		pDM_Odm
#else
	IN PADAPTER	Adapter
#endif
	);
#endif

#if(DM_ODM_SUPPORT_TYPE & ODM_WIN)
#define MAX_TOLERANCE          5
#define IQK_DELAY_TIME         1               //ms

 //
// BB/MAC/RF other monitor API
//

void	PHY_SetMonitorMode8192C(IN	PADAPTER	pAdapter,
										IN	BOOLEAN		bEnableMonitorMode	);
										
//
// IQ calibrate
//
void	
PHY_IQCalibrate_8192C(		IN	PADAPTER	pAdapter,	
							IN	BOOLEAN 	bReCovery);
							
//
// LC calibrate
//
void	
PHY_LCCalibrate_8192C(		IN	PADAPTER	pAdapter);

//
// AP calibrate
//
void	
PHY_APCalibrate_8192C(		IN	PADAPTER	pAdapter,
								IN 	s1Byte		delta);
#endif

#define ODM_TARGET_CHNL_NUM_2G_5G	59


VOID
ODM_ResetIQKResult(
	IN PDM_ODM_T	pDM_Odm 
);
u1Byte 
ODM_GetRightChnlPlaceforIQK(
    IN u1Byte chnl
);

								
#endif	// #ifndef __HAL_PHY_RF_H__

