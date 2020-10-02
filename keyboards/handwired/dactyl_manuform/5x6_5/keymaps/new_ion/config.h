/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#pragma once

#include "config_common.h"

#define PRODUCT_ID      0x3536
#define DEVICE_VER      0x0002
#define PRODUCT         Dactyl-Manuform (5x6)

#define SPLIT_USB_DETECT
// #define USE_I2C
#define USE_SERIAL
#define SOFT_SERIAL_PIN D3



#define MATRIX_COL_PINS { B5, B4, E6, D7, C6, D4 } //     D4, C6, D7, E6, B4, B5

#define ELITE_C // elite C has dead B2 pin
                // pro micro wiring harness is too short for B2 row to reach F7
#ifdef ELITE_C
    #define MATRIX_ROW_PINS { F6, F7, B1, B3, F5, B6 }
#endif
#ifndef ELITE_C
    #define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6 }
#endif

#define DIODE_DIRECTION COL2ROW


//#define KINETIC_SPEED
