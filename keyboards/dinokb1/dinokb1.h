/* Copyright 2017 REPLACE_WITH_YOUR_NAME
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
#ifndef DINOKB1_H
#define DINOKB1_H

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
#define LAYOUT(                        \
    /* Left side */                    \
    k00,      k01, k02, k03, k04,      \
    k10, k11, k12, k13, k14, k15, k16, \
    k20, k21, k22, k23, k24, k25,      \
    k30, k31, k32, k33, k34, k35,      \
    k40, k41, k42, k43, k44, k45,      \
    k50, k51, k52,      k53,           \
    /* Right side */                             \
         k05, k06, k60, k61, k62, k63, k64, k65, \
         k17, k18, k70, k71, k72, k73, k74, k75, \
         k26, k27, k80, k81, k82, k83, k84, k85, \
         k36, k37, k90, k91, k92, k93,      k94, \
    k46, k47, k48, kA0, kA1, kA2,           kA3, \
    k54,      k55,      kB0, kB1, kB2,      kB3, \
    /* Number pad */    \
    k66, k67, k68,      \
    k76, k77, k78, k79, \
    k86, k87, k88,      \
    k95, k96, k97, k98, \
    kA4, kA5, kA6,      \
    kB4, kB5, kB6, kB7  \
) \
{                                                                           \
    { k00,   KC_NO, k01, k02,   k03,   k04,   KC_NO, KC_NO, k05,   k06   }, \
    { k10,   k11,   k12, k13,   k14,   k15,   KC_NO, k16,   k17,   k18   }, \
    { k20,   k21,   k22, k23,   k24,   k25,   KC_NO, KC_NO, k26,   k27   }, \
    { k30,   k31,   k32, k33,   k34,   k35,   KC_NO, KC_NO, k36,   k37   }, \
    { k40,   k41,   k42, k43,   k44,   k45,   KC_NO, k46,   k47,   k48   }, \
    { k50,   k51,   k52, KC_NO, k53,   KC_NO, KC_NO, k54,   KC_NO, k55   }, \
    { k60,   k61,   k62, k63,   k64,   k65,   k66,   k67,   k68,   KC_NO }, \
    { k70,   k71,   k72, k73,   k74,   k75,   k76,   k77,   k78,   k79   }, \
    { k80,   k81,   k82, k83,   k84,   k85,   k86,   k87,   k88,   KC_NO }, \
    { k90,   k91,   k92, k93,   KC_NO, k94,   k95,   k96,   k97,   k98   }, \
    { kA0,   kA1,   kA2, KC_NO, KC_NO, kA3,   kA4,   kA5,   kA6,   KC_NO }, \
    { KC_NO, kB0,   kB1, kB2,   KC_NO, kB3,   kB4,   kB5,   kB6,   kB7   }  \
}

#endif
