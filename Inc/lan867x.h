/*
 * lan867x.h
 *
 *  Created on: Aug 12, 2025
 *      Author: bens1
 */

#ifndef INC_LAN867X_H_
#define INC_LAN867X_H_

#ifdef __cplusplus
extern "C" {
#endif


#include "stdint.h"
#include "stdbool.h"


typedef struct phy_handle_lan867x_t phy_handle_lan867x_t;


typedef enum {
    PHY_VARIANT_LAN8670,
    PHY_VARIANT_LAN8671,
    PHY_VARIANT_LAN8672,
    PHY_VARIANT_LAN867X_INVALID,
} phy_variant_lan867x_t;

typedef enum {
    PHY_INTERFACE_LAN867X_MII,
    PHY_INTERFACE_LAN867X_RMII,
    PHY_INTERFACE_LAN867X_INVALID,
} phy_interface_lan867x_t;

typedef struct {
    phy_variant_lan867x_t   variant;
    uint32_t                timeout; /* Timeout in ms for doing anything with a timeout (read, write, take mutex etc) */
    uint8_t                 phy_addr;
    phy_interface_lan867x_t interface;
} phy_config_lan867x_t;

struct phy_handle_lan867x_t {
    bool initialised;
};


#ifdef __cplusplus
}
#endif

#endif /* INC_LAN867X_H_ */
