/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
const ckled2001_led __flash g_ckled2001_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
    {0, I_1,    G_1,    H_1},
    {0, I_2,    G_2,    H_2},
    {0, I_3,    G_3,    H_3},
    {0, I_4,    G_4,    H_4},
    {0, I_5,    G_5,    H_5},
    {0, I_6,    G_6,    H_6},
    {0, I_7,    G_7,    H_7},
    {0, I_8,    G_8,    H_8},
    {0, I_9,    G_9,    H_9},
    {0, I_10,   G_10,   H_10},
    {0, I_11,   G_11,   H_11},
    {0, I_12,   G_12,   H_12},
    {0, I_13,   G_13,   H_13},
    {0, I_15,   G_15,   H_15},
    {0, I_16,   G_16,   H_16},
    {0, L_5,    J_5,    K_5},

    {0, C_1,    A_1,    B_1},
    {0, C_2,    A_2,    B_2},
    {0, C_3,    A_3,    B_3},
    {0, C_4,    A_4,    B_4},
    {0, C_5,    A_5,    B_5},
    {0, C_6,    A_6,    B_6},
    {0, C_7,    A_7,    B_7},
    {0, C_8,    A_8,    B_8},
    {0, C_9,    A_9,    B_9},
    {0, C_10,   A_10,   B_10},
    {0, C_11,   A_11,   B_11},
    {0, C_12,   A_12,   B_12},
    {0, C_13,   A_13,   B_13},
    {0, C_14,   A_14,   B_14},
    {0, C_15,   A_15,   B_15},
    {0, C_16,   A_16,   B_16},
    {0, L_9,    J_9,    K_9},
    {0, L_10,   J_10,   K_10},
    {0, L_11,   J_11,   K_11},
    {0, L_12,   J_12,   K_12},
    {0, L_13,   J_13,   K_13},

    {0, F_1,    D_1,    E_1},
    {0, F_2,    D_2,    E_2},
    {0, F_3,    D_3,    E_3},
    {0, F_4,    D_4,    E_4},
    {0, F_5,    D_5,    E_5},
    {0, F_6,    D_6,    E_6},
    {0, F_7,    D_7,    E_7},
    {0, F_8,    D_8,    E_8},
    {0, F_9,    D_9,    E_9},
    {0, F_10,   D_10,   E_10},
    {0, F_11,   D_11,   E_11},
    {0, F_12,   D_12,   E_12},
    {0, F_13,   D_13,   E_13},
    {0, F_14,   D_14,   E_14},
    {0, F_15,   D_15,   E_15},
    {0, F_16,   D_16,   E_16},
    {0, L_14,   J_14,   K_14},
    {0, L_15,   J_15,   K_15},
    {0, L_16,   J_16,   K_16},
    {1, L_1,    J_1,    K_1},

    {1, C_16,   A_16,   B_16},
    {1, C_15,   A_15,   B_15},
    {1, C_14,   A_14,   B_14},
    {1, C_13,   A_13,   B_13},
    {1, C_12,   A_12,   B_12},
    {1, C_11,   A_11,   B_11},
    {1, C_10,   A_10,   B_10},
    {1, C_9,    A_9,    B_9},
    {1, C_8,    A_8,    B_8},
    {1, C_7,    A_7,    B_7},
    {1, C_6,    A_6,    B_6},
    {1, C_5,    A_5,    B_5},
    {1, C_3,    A_3,    B_3},
    {1, L_3,    J_3,    K_3},
    {1, L_4,    J_4,    K_4},
    {1, L_5,    J_5,    K_5},
    {1, L_2,    J_2,    K_2},

    {1, I_16,   G_16,   H_16},
    {1, I_14,   G_14,   H_14},
    {1, I_13,   G_13,   H_13},
    {1, I_12,   G_12,   H_12},
    {1, I_11,   G_11,   H_11},
    {1, I_10,   G_10,   H_10},
    {1, I_9,    G_9,    H_9},
    {1, I_8,    G_8,    H_8},
    {1, I_7,    G_7,    H_7},
    {1, I_6,    G_6,    H_6},
    {1, I_5,    G_5,    H_5},
    {1, I_3,    G_3,    H_3},
    {1, I_1,    G_1,    H_1},
    {1, L_6,    J_6,    K_6},
    {1, L_7,    J_7,    K_7},
    {1, L_8,    J_8,    K_8},

    {1, F_16,   D_16,   E_16},
    {1, F_15,   D_15,   E_15},
    {1, F_14,   D_14,   E_14},
    {1, F_10,   D_10,   E_10},
    {1, F_6,    D_6,    E_6},
    {1, F_5,    D_5,    E_5},
    {1, F_4,    D_4,    E_4},
    {1, F_3,    D_3,    E_3},
    {1, F_2,    D_2,    E_2},
    {1, F_1,    D_1,    E_1},
    {1, L_10,   J_10,   K_10},
    {1, L_11,   J_11,   K_11},
    {1, L_12,   J_12,   K_12},
    {1, L_9,    J_9,    K_9},

    {0, L_6,    J_6,    K_6},
    {0, L_7,    J_7,    K_7},
    {0, L_8,    J_8,    K_8},
    {0, L_4,    J_4,    K_4}
};

led_config_t g_led_config = {
    {
        {   0,      1,      2,      3,      4,      5,      6,      7,      8,      9,     10,     11,     12, NO_LED,     13,     14,     15,     35,     36  },
        {  16,     17,     18,     19,     20,     21,     22,     23,     24,     25,     26,     27,     28,     29,     30,     31,     32,     33,     34  },
        {  37,     38,     39,     40,     41,     42,     43,     44,     45,     46,     47,     48,     49,     50,     51,     52,     53,     54,     55  },
        {  57,     58,     59,     60,     61,     62,     63,     64,     65,     66,     67,     68, NO_LED,     69,     56,     73,     72,     70,     71  },
        {  74, NO_LED,     75,     76,     77,     78,     79,     80,     81,     82,     83,     84, NO_LED,     85,     89,     86,    103,     87,     88  },
        {  90,     91,     92, NO_LED, NO_LED, NO_LED,     93, NO_LED, NO_LED, NO_LED,     94,     95,     96,     97,     98,     99,    100,    101,    102  }
    },
    {
        {0, 0},          {22, 0}, {33, 0}, {44, 0}, {55, 0}, {66, 0}, {77, 0}, {88, 0}, {99, 0}, {110, 0}, {121, 0}, {132, 0}, {143, 0}, {154, 0}, {165, 0}, {176, 0},
        {0,13}, {11,13}, {22,13}, {33,13}, {44,13}, {55,13}, {66,13}, {77,13}, {88,13}, {99,13}, {110,13}, {121,13}, {132,13}, {143,13}, {154,13}, {165,13}, {176,13}, {187,13}, {198,13}, {209,13}, {224,13},
        {0,26}, {11,26}, {22,26}, {33,26}, {44,26}, {55,26}, {66,26}, {77,26}, {88,26}, {99,26}, {110,26}, {121,26}, {132,26}, {143,26}, {154,26}, {165,26}, {176,26}, {187,26}, {198,26}, {209,26},
        {0,39}, {11,39}, {22,39}, {33,39}, {44,39}, {55,39}, {66,39}, {77,39}, {88,39}, {99,39}, {110,39}, {121,39},           {143,39},                               {187,39}, {198,39}, {209,39}, {224,39},
        {0,52},          {22,52}, {33,52}, {44,52}, {55,52}, {66,52}, {77,52}, {88,52}, {99,52}, {110,52}, {121,52},           {143,52},           {165,52},           {187,52}, {198,52}, {209,52},
        {0,64}, {11,64}, {22,64},                            {66,64},                            {110,64}, {121,64}, {132,64}, {143,64}, {154,64}, {165,64}, {176,64}, {187,64},           {209,64}, {224,64}
    },
    {
        4,          4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,
        4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,
        4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,
        4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,          4,                      4,    4,    4,    4,
        4,          4,    4,    4,    4,    4,    4,    4,    4,    4,    4,          4,          4,          4,    4,    4,
        4,    4,    4,                      4,                      4,    4,    4,    4,    4,    4,    4,    4,          4,    4
    }
};
#endif
