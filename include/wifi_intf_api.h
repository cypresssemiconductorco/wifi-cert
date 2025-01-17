/*
 * Copyright 2024, Cypress Semiconductor Corporation (an Infineon company) or
 * an affiliate of Cypress Semiconductor Corporation.  All rights reserved.
 *
 * This software, including source code, documentation and related
 * materials ("Software") is owned by Cypress Semiconductor Corporation
 * or one of its affiliates ("Cypress") and is protected by and subject to
 * worldwide patent protection (United States and foreign),
 * United States copyright laws and international treaty provisions.
 * Therefore, you may use this Software only as provided in the license
 * agreement accompanying the software package from which you
 * obtained this Software ("EULA").
 * If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
 * non-transferable license to copy, modify, and compile the Software
 * source code solely for use in connection with Cypress's
 * integrated circuit products.  Any reproduction, modification, translation,
 * compilation, or representation of this Software except as specified
 * above is prohibited without the express written permission of Cypress.
 *
 * Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress
 * reserves the right to make changes to the Software without notice. Cypress
 * does not assume any liability arising out of the application or use of the
 * Software or any product or circuit described in the Software. Cypress does
 * not authorize its products for use in any products where a malfunction or
 * failure of the Cypress product may reasonably be expected to result in
 * significant property damage, injury or death ("High Risk Product"). By
 * including Cypress's product in a High Risk Product, the manufacturer
 * of such system or application assumes all risk of such use and in doing
 * so agrees to indemnify Cypress against all liability.
 */

/** *****************************************************************************
 *                           Porting Layer APIs
 *******************************************************************************/

#include "cy_result.h"

/** This function gets IOVAR value
 *
 * @param   iovar      : IOVAR name
 * @param   value      : value of the IOVAR to get from WiFi
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_get_iovar_value( const char *iovar, uint32_t *value );

/** This function sets IOVAR value
 *
 * @param   iovar      : IOVAR name
 * @param   value      : value of the IOVAR to set in WiFi
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_set_iovar_value( const char *iovar, uint32_t value );

/** This function disables Wi-Fi power save
 *
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_disable_wifi_powersave (void );

/** This function enables Wi-Fi power save
 *
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_enable_wifi_powersave (void );

/** This function gets Wi-Fi power save
 *
 * @param   value      : The pointer to wifi power save
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_get_wifi_powersave (uint32_t *value);

/** This function gets IOCTL value
 *
 * @param   ioctl      : IOCTL command
 * @param   value      : value of the IOCTL to get from WiFi
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_get_ioctl_value( uint32_t ioctl, uint32_t *value);
/** This function gets bss_max_idle
 *
 * @param   value      : value of the Period to get from WiFi
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 ********************************************************************************/
cy_rslt_t cywifi_wifi_bss_max_idle (uint32_t value);
/** This function sets randmac
 *
 * @param   value      : 0 for disable, 1 for enable
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 ********************************************************************************/
cy_rslt_t cywifi_set_randmac (uint32_t value);
/** This function sets IOCTL value
 *
 * @param   ioctl      : IOCTL command
 * @param   value      : value of the IOCTL to set in WiFi
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_set_ioctl_value( uint32_t ioctl, uint32_t value);

/** This function sets IOVAR buffer
 *
 * @param   iovar      : IOVAR
 * @param   buffer     : buffer to be set in  WiFi
 * @param   len        : The length of the buffer
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_set_iovar_buffer( const char *iovar, uint8_t *buffer, uint16_t len);

/** This function gets IOCTL buffer
 *
 * @param   ioctl      : IOCTL command
 * @param   buffer     : buffer to get from WiFi
 * @param   len        : The length of the buffer
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_get_ioctl_buffer( uint32_t ioctl, uint8_t *buffer, uint16_t len);

/** This function sets IOCTL buffer
 *
 * @param   ioctl      : IOCTL command
 * @param   buffer     : buffer to be set in  WiFi
 * @param   len        : The length of the buffer
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_set_ioctl_buffer( uint32_t ioctl, uint8_t *buffer, uint16_t len);

/** This function returns the status of the WiFi Connection to AP
 *
 * @return bool        : 1 ( Connected to AP)
 *                     : 0 ( Disconnected from AP)
 *
 *******************************************************************************/
bool cywifi_is_interface_connected ( void );

/** This function sets WiFi Radio up
 *
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_set_up  ( void );

/** This function sets WiFi Radio down
 *
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_set_down ( void );

/** This function scans for WiFi Access point
 *
 * @param   buf        : The pointer to the buffer
 * @param   buflen     : The length of the buffer
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_scan (char *buf , uint32_t buflen);

/** This function connects to WiFi Access point
 *
 * @param   ssid       : The pointer to the SSID of WiFi AP
 * @param   key        : The wireless key
 * @param   auth_type  : The authentication type
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_connect_ap( const char *ssid, const char *key, uint32_t auth_type );

/** This function updates DUT static IP address settings
 *
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_update_staticip_settings (void );

/** This function disconnects from WiFi Access point
 *
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_disconnect( void );

/** This function gets Authentication type
 *
 * @param  encptype    : The encryption type in string     ( for ex: aes-ccmp, tkip, sae)
 * @param  keymgmttype : The key management type in string ( for ex: wpa, wpa2, wpa3)
 * @param  sectype     : The security type ( for ex: open, wpa2, wep)
 * @param  pmf         : The pmf type (for ex: optional, required, enabled)
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
int cywifi_get_authtype( char* encptype, char* keymgmttype, char* sectype, char* pmf );
#ifdef QUICK_TRACK_SUPPORT
int cywifi_get_qt_authtype( char* encptype, char* keymgmttype, char* sectype, char* pmf );
#endif

/** This function gets MAC address of STA
 *
 * @param  mac_addr    : The pointer to the buffer to get MAC address
 * @return cy_rslt_t   : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_get_macaddr ( uint8_t *mac_addr);

/** This function gets BSSID of the Access Point
 *
 * @param  bssid       : The pointer to the buffer to get BSSID of the AP
 * @return cy_rslt_t   : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_get_bssid ( uint8_t *bssid );

/** This function sets or clears DHCP
 *
 * @param  enable      : DHCP (1: enable, 0: disable)
 * @return cy_rslt_t   : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_set_dhcp ( bool enable);

/** This function gets WiFi Firmware logs
 *
 * @param  buffer      : The pointer to buffer to copy WiFi F/W logs
 * @param  buflen      : Buffer length
 * @return cy_rslt_t   : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_get_wifilog( uint8_t *buffer, uint16_t buflen );

/** This function prints WHD statistics
 *
 * @return cy_rslt_t   : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_print_whd_stats( void );

/** This function sets WiFi channel
 *
 * @param  channel     : The value of the WiFi channel to be set
 * @return cy_rslt_t   : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_set_channel ( int channel );

/** This function sets Static IP address, Gateway and Netmask
 *
 * @param  ip_addr     : The pointer to IP address in DOT notation
 * @param  netmask     : The pointer to netmask address in DOT notation
 * @param  gateway     : The pointer to gateway address in DOT notation
 * @return cy_rslt_t   : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_set_network ( char *ip_addr, char *netmask, char *gateway );

/** This function gets authentication type from the string
 * @param  auth_type   : The pointer to IP address in DOT notation
 * @param  key_buffer  : The pointer to key buffer
 * @param  argc        : Value of argument count
 * @return cy_rslt_t   : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_set_auth_credentials ( int *auth_type, uint8_t *key_buffer, int argc );

/** This function gets Static IP settings and sets in SigmaDUT object
 * i.  IP Address
 * ii. Netmask Address
 * iii. Gateway Address
 *
 * @return cy_rslt_t   : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_get_ip_settings( void );

/** This function reboots the device
 *
 *******************************************************************************/
void cywifi_system_reset( void );

/** This function gets RSSI of associated AP
 *
 * @param  value       : The pointer to the buffer to get RSSI
 * @return cy_rslt_t   : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_get_rssi(int32_t *value);

/** This function setup individual TWT
 *
 * @return cy_rslt_t   : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_itwt_setup(void);

/** This function teardown TWT
 *
 * @return cy_rslt_t   : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_twt_teardown(void);
/** This function setup broadcast TWT
 *  
 * @return cy_rslt_t   : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR     *
 *
 ********************************************************************************/
cy_rslt_t cywifi_btwt_setup(void);

/** This function do suspend resume operation for TWT
 *
 * @return cy_rslt_t   : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 * @param operation    : 1 for suspend and 0 for resume
 *
 ********************************************************************************/
cy_rslt_t cywifi_twt_operation(uint32_t operation);

/** This function set HE LTF_GI
 *
 * @return cy_rslt_t   : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_set_ltf_gi(void);

/** This function set HE OMI(Operating Mode Indicator)
 *
 * @return cy_rslt_t   : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_he_omi(void);

/** This function enable MUEDCA Warkaround in FW for CERT
 *
 * @return cy_rslt_t   : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_he_muedca_war_enable(void);

/** This function clear ALL PMKID in DUT
 *
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_clear_pmkid (void );

/** This function add Channel Preference
 *
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_mbo_add_chan_pref (void );

/** This function clear ALL Channel Preference in DUT
 *
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_mbo_clear_chan_pref (void );

/** This function send WNM Notification req for Non-preferred chan report
 *
 * @param  value       : The value to set sub-element of WNM Notification request frame
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_mbo_send_notif (uint8_t sub_elem_type );

/** This function clear SAE password in DUT
 *
 * @return  cy_rslt_t  : CY_RSLT_SUCCESS
 *                     : CY_RSLT_TYPE_ERROR
 *
 *******************************************************************************/
cy_rslt_t cywifi_clear_saepassword(void);
