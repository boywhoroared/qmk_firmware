/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define USE_SERIAL_PD2

/* manna-harbour_miryoku */

// default but used in macros
#define TAPPING_TERM 250

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64

/* manna-harbour_miryoku */

/* RGB Lighting */
#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLED_NUM 27
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17

    // #define RGBLIGHT_MODE_STATIC_LIGHT
    // #define RGBLIGHT_MODE_BREATHING
    // #define RGBLIGHT_MODE_RAINBOW_MOOD
    // #define RGBLIGHT_MODE_RAINBOW_SWIRL
    // #define RGBLIGHT_MODE_SNAKE
    // #define RGBLIGHT_MODE_KNIGHT
    // #define RGBLIGHT_MODE_CHRISTMAS
    // #define RGBLIGHT_MODE_STATIC_GRADIENT
    #define RGBLIGHT_MODE_RGB_TEST
    // #define RGBLIGHT_MODE_ALTERNATING
    #define RGBLIGHT_MODE_TWINKLE
#endif

#ifdef RGB_MATRIX_ENABLE
#   define RGB_MATRIX_KEYPRESSES // reacts to keypresses
// #   define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
// #   define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects
#   define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended
#   define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #   define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
// #   define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash. 
#    define RGB_MATRIX_HUE_STEP 8
#    define RGB_MATRIX_SAT_STEP 8
#    define RGB_MATRIX_VAL_STEP 8
#    define RGB_MATRIX_SPD_STEP 10

/* Disable the animations you don't want/need.  You will need to disable a good number of these    *
 * because they take up a lot of space.  Disable until you can successfully compile your firmware. */

#define DISABLE_RGB_MATRIX_ALPHAS_MODS
#define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN
// #define DISABLE_RGB_MATRIX_BREATHING
#define DISABLE_RGB_MATRIX_BAND_SAT
#define DISABLE_RGB_MATRIX_BAND_VAL
#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define DISABLE_RGB_MATRIX_CYCLE_ALL
#define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define DISABLE_RGB_MATRIX_CYCLE_OUT_IN
#define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define DISABLE_RGB_MATRIX_DUAL_BEACON
#define DISABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define DISABLE_RGB_MATRIX_CYCLE_SPIRAL
#define DISABLE_RGB_MATRIX_RAINBOW_BEACON
#define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define DISABLE_RGB_MATRIX_RAINDROPS
#define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define DISABLE_RGB_MATRIX_TYPING_HEATMAP
#define DISABLE_RGB_MATRIX_DIGITAL_RAIN
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
// #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
// #define DISABLE_RGB_MATRIX_SPLASH
// #define DISABLE_RGB_MATRIX_MULTISPLASH
// #define DISABLE_RGB_MATRIX_SOLID_SPLASH
// #define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH

#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SPLASH
#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"

#define LAYOUT_miryoku(\
       K00,   K01,   K02,   K03,   K04,          K05,   K06,   K07,   K08,   K09,\
       K10,   K11,   K12,   K13,   K14,          K15,   K16,   K17,   K18,   K19,\
       K20,   K21,   K22,   K23,   K24,          K25,   K26,   K27,   K28,   K29,\
       N30,   N31,   K32,   K33,   K34,          K35,   K36,   K37,   N38,   N39\
)\
LAYOUT_split_3x6_3(\
KC_NO, K00,   K01,   K02,   K03,   K04,          K05,   K06,   K07,   K08,   K09,   KC_NO,\
KC_NO, K10,   K11,   K12,   K13,   K14,          K15,   K16,   K17,   K18,   K19,   KC_NO,\
KC_NO, K20,   K21,   K22,   K23,   K24,          K25,   K26,   K27,   K28,   K29,   KC_NO,\
                     K32,   K33,   K34,          K35,   K36,   K37\
)
