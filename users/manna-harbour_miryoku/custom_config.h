// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

// Keycodes

// Alias used by Miryoku layouts
#define XXX KC_NO

// One Shot Meh and Hyper
#define OSM_MEH OSM(MOD_MEH)
#define OSM_HYPR OSM(MOD_HYPR)

// Enable One Shot Keys
#define ONESHOT_TAP_TOGGLE 5
#define ONESHOT_TIMEOUT 5000

#if defined (KEYBOARD_crkbd)

#define MIRYOKU_MAPPING( \
          K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
          K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
          K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
          N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
    ) \
    LAYOUT_split_3x6_3( \
    OSM_MEH,  K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  OSM_HYPR, \
    LCTL_T(KC_LBRC),  K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  RCTL_T(KC_RBRC), \
    SC_LSPO,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  SC_RSPC, \
                      K32,  K33,  K34,         K35,  K36,  K37 \
    )

#endif

#if defined(KEYBOARD_splitkb_kyria_rev2)

#define MIRYOKU_MAPPING( \
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
) \
LAYOUT( \
OSM_MEH, K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, OSM_HYPR, \
LCTL_T(KC_LBRC), K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, RCTL_T(KC_RBRC), \
SC_LSPO, K20, K21, K22, K23, K24, XXX, XXX,      XXX, XXX, K25, K26, K27, K28, K29, SC_RSPC, \
               XXX, K32, K33, K34, XXX,      XXX, K35, K36, K37, XXX \
)
#endif

