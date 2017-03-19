/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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
 * AZTEEG_X3_PRO (Arduino Mega) pin assignments
 */

#define BOARD_NAME "Azteeg X3 Pro"

#include "pins_RAMPS.h"

//
// Servos
//
// Tested this pin with bed leveling on a Delta with 1 servo.
// Physical wire attachment on EXT1: GND, 5V, D47.
//
#undef SERVO0_PIN
#define SERVO0_PIN         47

//
// Limit Switches
//
// Swap the MIN and MAX endstop pins because the X3 Pro comes with only
// MIN endstop pin headers soldered onto the board.
//
#if ENABLED(DELTA)
  #undef X_MIN_PIN
  #undef X_MAX_PIN
  #undef Y_MIN_PIN
  #undef Y_MAX_PIN
  #undef Z_MIN_PIN
  #undef Z_MAX_PIN

  #define X_MIN_PIN         2 //AZTEEG X3 PRO
  #define X_MAX_PIN         3 //AZTEEG X3 PRO
  #define Y_MIN_PIN        15 //AZTEEG X3 PRO
  #define Y_MAX_PIN        14 //AZTEEG X3 PRO
  #define Z_MIN_PIN        19 //AZTEEG X3 PRO
  #define Z_MAX_PIN        18 //AZTEEG X3 PRO
#endif

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  18 //AZTEEG X3 PRO
#endif

//
// Steppers
//
#define E2_STEP_PIN        23 //AZTEEG X3 PRO
#define E2_DIR_PIN         25 //AZTEEG X3 PRO
#define E2_ENABLE_PIN      40 //AZTEEG X3 PRO

#define E3_STEP_PIN        27 //AZTEEG X3 PRO
#define E3_DIR_PIN         29 //AZTEEG X3 PRO
#define E3_ENABLE_PIN      41 //AZTEEG X3 PRO

#define E4_STEP_PIN        43 //AZTEEG X3 PRO
#define E4_DIR_PIN         37 //AZTEEG X3 PRO
#define E4_ENABLE_PIN      42 //AZTEEG X3 PRO

//
// Temperature Sensors
//
#undef TEMP_0_PIN
#define TEMP_0_PIN         13   // Analog Input   AZTEEG X3 PRO
#undef TEMP_1_PIN
#define TEMP_1_PIN         13   // Analog Input   AZTEEG X3 PRO

#define TEMP_2_PIN         13   //12   // Analog Input   AZTEEG X3 PRO
#define TEMP_3_PIN         13   //11   // Analog Input   AZTEEG X3 PRO
#define TEMP_4_PIN         13   //10   // Analog Input   AZTEEG X3 PRO
#define TC1                 4   // Analog Input (Thermo couple on Azteeg X3Pro)   AZTEEG X3 PRO
#define TC2                 5   // Analog Input (Thermo couple on Azteeg X3Pro)   AZTEEG X3 PRO

//
// Heaters / Fans
//
// MARLIN FIRMWARE PROTECTS ALL FAN_PINS AND HEATER_X_PINS
//
// #define HEATER_2_PIN       16 //AZTEEG X3 PRO
// #define HEATER_3_PIN       17 //AZTEEG X3 PRO
// #define HEATER_4_PIN        4 //AZTEEG X3 PRO
// #define HEATER_5_PIN        5 //AZTEEG X3 PRO
// #define HEATER_6_PIN        6 //AZTEEG X3 PRO
// #define HEATER_7_PIN       11 //AZTEEG X3 PRO

#undef HEATER_0_PIN
#undef HEATER_1_PIN
#define HEATER_0_PIN     11 // Tie to Pin 11
#define HEATER_1_PIN     11 // Tie to Pin 11
#define HEATER_2_PIN     11 // Tie to Pin 11
#define HEATER_3_PIN     11 // Tie to Pin 11


#define TEST_0_PIN       10 // HE1 PWM
#define TEST_1_PIN        9 // HE2 PWM
#define TEST_2_PIN       16 // HE3 Not PWM
#define TEST_3_PIN       17 // HE4 Not PWM


//Pressure Regulator Pins
#undef FIL_RUNOUT_PIN       // Pin 4
#define REG_1_PIN         4 // HE5 PWM
#undef SERVO2_PIN           // Pin 5
#define REG_2_PIN         5 // HE6 PWM
#undef SERVO1_PIN           // Pin 6
#define REG_3_PIN         6 // HE7 PWM


#define TEST_7_PIN       11 // HE8 TIED TO INTERNAL CLOCK


//Valve Pins
#define TEST_8_PIN        2 // X_MAX PWM
#define VALVE_1_PIN       7 // LCD PWM
#define VALVE_2_PIN      44 // LCD PWM
#define VALVE_3_PIN      45 // LCD PWM

#undef FAN_PIN
#define FAN_PIN             11   // Part Cooling System

#define CONTROLLERFAN_PIN   -1   // 4 previously ; Pin used for the fan to cool motherboard (-1 to disable)

// Fans/Water Pump to cool the hotend cool side.
#define ORIG_E0_AUTO_FAN_PIN 11 //5
#define ORIG_E1_AUTO_FAN_PIN 11 //5
#define ORIG_E2_AUTO_FAN_PIN 11 //5
#define ORIG_E3_AUTO_FAN_PIN 11 //5

//
// LCD / Controller
//
#undef BEEPER_PIN
#define BEEPER_PIN         33

#if ENABLED(VIKI2) || ENABLED(miniVIKI)
  #undef SD_DETECT_PIN
  #define SD_DETECT_PIN    49 // For easy adapter board
#else
  #define STAT_LED_RED_PIN 32
  #define STAT_LED_BLUE_PIN 35
#endif
