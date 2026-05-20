#pragma once

#include "wifi_provisioning/manager.h"
#include "wifi_provisioning/wifi_config.h"

// Compatibility layer for Arduino-ESP32 builds expecting network_provisioning API names.
#define NETWORK_PROV_EVENT WIFI_PROV_EVENT
#define NETWORK_PROV_INIT WIFI_PROV_INIT
#define NETWORK_PROV_START WIFI_PROV_START
#define NETWORK_PROV_END WIFI_PROV_END
#define NETWORK_PROV_DEINIT WIFI_PROV_DEINIT
#define NETWORK_PROV_WIFI_CRED_RECV WIFI_PROV_CRED_RECV
#define NETWORK_PROV_WIFI_CRED_FAIL WIFI_PROV_CRED_FAIL
#define NETWORK_PROV_WIFI_CRED_SUCCESS WIFI_PROV_CRED_SUCCESS

#define network_prov_mgr_deinit wifi_prov_mgr_deinit

typedef wifi_prov_sta_fail_reason_t network_prov_wifi_sta_fail_reason_t;

#define NETWORK_PROV_WIFI_STA_AUTH_ERROR WIFI_PROV_STA_AUTH_ERROR
#define NETWORK_PROV_WIFI_STA_AP_NOT_FOUND WIFI_PROV_STA_AP_NOT_FOUND
