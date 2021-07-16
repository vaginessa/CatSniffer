#ifndef _SMARTRF_SETTINGS_RF_PROP_4_H_
#define _SMARTRF_SETTINGS_RF_PROP_4_H_

//*********************************************************************************
// Generated by SmartRF Studio version 2.7.0 (build #21)
// Tested for SimpleLink SDK version: CC13x0 SDK 1.50.xx.xx
// Device: CC1350 Rev. 2.1
// 
//*********************************************************************************
#include <ti/devices/DeviceFamily.h>
#include DeviceFamily_constructPath(driverlib/rf_mailbox.h)
#include DeviceFamily_constructPath(driverlib/rf_common_cmd.h)
#include DeviceFamily_constructPath(driverlib/rf_prop_cmd.h)
#include <ti/drivers/rf/RF.h>


// TI-RTOS RF Mode Object
extern RF_Mode RFProp4_mode;


// RF Core API commands
extern rfc_CMD_PROP_RADIO_DIV_SETUP_t RFProp4_cmdPropRadioDivSetup;
extern rfc_CMD_FS_t RFProp4_cmdFs;
extern rfc_CMD_PROP_TX_t RFProp4_cmdPropTx;
extern rfc_CMD_PROP_RX_t RFProp4_cmdPropRx;


#endif // _SMARTRF_SETTINGS_RF_PROP_4_H_

