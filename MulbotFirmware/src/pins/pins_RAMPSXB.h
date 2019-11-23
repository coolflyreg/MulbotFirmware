/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Arduino Mega with RAMPS1.4 and XB
 */

#define BOARD_NAME "RAMPSXB"

#define FILWIDTH_PIN      -1
#define FIL_RUNOUT_PIN    -1

#include "ramps/pins_RAMPS.h"

#undef X_MAX_PIN
#undef Y_MAX_PIN
#undef Z_MAX_PIN

#define X_MAX_PIN           -1
#define Y_MAX_PIN           -1
#define Z_MAX_PIN           -1

#undef SERVO1_PIN
#undef SERVO2_PIN
#undef SERVO3_PIN
#define SERVO1_PIN -1
#define SERVO2_PIN -1
#define SERVO3_PIN -1

#define E2_STEP_PIN         19
#define E2_DIR_PIN          15
#define E2_ENABLE_PIN       63

#define E3_STEP_PIN         39
#define E3_DIR_PIN          2
#define E3_ENABLE_PIN       58

#define E4_STEP_PIN         44
#define E4_DIR_PIN          42
#define E4_ENABLE_PIN       43

#define E5_STEP_PIN         47
#define E5_DIR_PIN          32
#define E5_ENABLE_PIN       57

#undef HEATER_0_PIN
#undef HEATER_1_PIN

#define HEATER_0_PIN       10
#define HEATER_1_PIN       8
#define HEATER_2_PIN       9
#define HEATER_3_PIN       4
#define HEATER_4_PIN       5
#define HEATER_5_PIN       6
#define HEATER_6_PIN       45

#undef HEATER_BED_PIN      

#define HEATER_BED_PIN      8

#undef TEMP_0_PIN
#undef TEMP_1_PIN
#undef TEMP_BED_PIN
// #define TEMP_BED_PIN        -1

#define TEMP_0_PIN          13   
#define TEMP_1_PIN          14
#define TEMP_2_PIN          15
#define TEMP_3_PIN          11
#define TEMP_4_PIN          12
#define TEMP_5_PIN          10
#define TEMP_BED_PIN        5

#define V5_COOLING_PIN      9

#undef FAN_PIN
#define FAN_PIN             HEATER_3_PIN
#ifdef FAN1_PIN
#undef FAN1_PIN
#define FAN1_PIN            HEATER_4_PIN
#endif
// #define STATUS_HOTEND_BITMAPS 5
// #define STATUS_HOTEND0_WIDTH 3
// #define STATUS_HOTEND1_WIDTH 3
// #define STATUS_HOTEND2_WIDTH 3
// #define STATUS_HOTEND3_WIDTH 3
// #define STATUS_HOTEND4_WIDTH 3
// #define STATUS_HOTEND5_WIDTH 3 
