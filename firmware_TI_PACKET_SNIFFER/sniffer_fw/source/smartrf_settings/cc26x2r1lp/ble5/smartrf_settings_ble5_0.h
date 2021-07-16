#ifndef _SMARTRF_SETTINGS_BLE5_0_H_
#define _SMARTRF_SETTINGS_BLE5_0_H_

//*********************************************************************************
// Generated by SmartRF Studio version 2.13.0 (build #156- CZ settings for CC13x2R and CC26x2R)
// The applied template is compatible with CC26x2 SDK 2.40.xx.xx
// Device: CC2652R Rev. 2.1
//
//*********************************************************************************
#include <ti/devices/DeviceFamily.h>
#include DeviceFamily_constructPath(driverlib/rf_mailbox.h)
#include DeviceFamily_constructPath(driverlib/rf_common_cmd.h)
#include DeviceFamily_constructPath(driverlib/rf_ble_cmd.h)
#include <ti/drivers/rf/RF.h>


// TI-RTOS RF Mode Object
extern RF_Mode Ble5_0_mode;

// RF Core API commands
extern rfc_CMD_BLE5_RADIO_SETUP_t Ble5_0_cmdBle5RadioSetup;
extern rfc_CMD_FS_t Ble5_0_cmdFs;
extern rfc_CMD_BLE_ADV_NC_t Ble5_0_cmdBleAdvNc;
extern rfc_CMD_BLE5_GENERIC_RX_t Ble5_0_cmdBle5GenericRx;

// RF Core API Overrides
extern uint32_t pOverridesCommon[];
extern uint32_t pOverrides1Mbps[];
extern uint32_t pOverrides2Mbps[];
extern uint32_t pOverridesCoded[];

#endif // _SMARTRF_SETTINGS_BLE5_0_H_

