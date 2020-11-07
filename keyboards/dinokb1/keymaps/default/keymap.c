/* Copyright 2017 Konstantinos Zervos
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
#include "dinokb1.h"

#define BASE  0 // default layer
#define NUM   1 // Number pad
#define MOUSE 2 // Mouse and media keys
#define SFN   3 // Space Fn
#define PROG  4 // Programming symbols
#define MAC   5 // Mac layer
#define MSFN  6 // Mac Space Fn
//#define VSWIN 4 // Window navigation/manipulation for Visual studio

// enum custom_keycodes {
    // MACRO_CTRL_F = SAFE_RANGE,
    // MACRO_CTRL_H,
    // MACRO_CTRL_I,
    // MACRO_RETURN_FROM_FIND,
// };
// OSM(MOD_LCTL | MOD_LALT)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT( /* Base */
  /* Left side */
  KC_ESC,       KC_F1,   KC_F2,   KC_F3, KC_F4,                 \
  KC_GRV,       KC_1,    KC_2,    KC_3,  KC_4, KC_5, MO(MOUSE), \
  KC_TAB,       KC_Q,    KC_W,    KC_E,  KC_R, KC_T,            \
  LGUI(KC_SPC), KC_A,    KC_S,    KC_D,  KC_F, KC_G,            \
  KC_LSPO,      KC_Z,    KC_X,    KC_C,  KC_V, KC_B,            \
  KC_LCTL,      KC_LGUI, KC_LALT, LT(PROG, KC_SPC),             \
  /* Right side */
                         KC_F5,   KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  \
                         KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, \
                         KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
                         KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,           \
  MT(MOD_RCTL, KC_APP),  KC_N,    KC_M,            KC_COMM, KC_DOT,  KC_SLSH,          KC_RSPC, \
  LT(SFN, KC_SPC),       KC_RALT, KC_APP, TG(MAC), KC_CALC, KC_RCTL, \
  /* Number pad */
  KC_PSCR, KC_SLCK, KC_PAUS,          \
  TG(NUM), KC_PSLS, KC_PAST, KC_PMNS, \
  KC_7,    KC_8,    KC_9,             \
  KC_4,    KC_5,    KC_6,    KC_PPLS, \
  KC_1,    KC_2,    KC_3,             \
  KC_0,    KC_COMM, KC_DOT,  KC_PENT  \
),
[NUM] = LAYOUT( /* Number Pad */
  /* Left side */
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            \
  /* Right side */
           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,          \
  /* Number pad */
  KC_TRNS, KC_TRNS, KC_TRNS,            \
  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  \
  KC_INS,  KC_HOME, KC_PGUP,            \
  KC_DEL,  KC_END,  KC_PGDN,  KC_TRNS,  \
  KC_NO,   KC_UP,   KC_NO,              \
  KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS   \
),
[MOUSE] = LAYOUT( /* Mouse and media keys */
  /* Left side */
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            \
  /* Right side */
           KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
           KC_TRNS, KC_TRNS, KC_MUTE,  KC_TRNS,  KC_TRNS, KC_VOLD, KC_VOLU, KC_TRNS, \
           KC_TRNS, KC_BTN1, KC_MS_U,  KC_BTN2,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
           KC_TRNS, KC_MS_L, KC_MS_D,  KC_MS_R,  KC_TRNS, KC_TRNS, KC_TRNS,          \
  KC_TRNS, KC_DEL,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,          KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,                    KC_TRNS,          \
  /* Number pad */
  KC_CALC, KC_TRNS, KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_MUTE, KC_VOLD, \
  KC_NO,   KC_NO,   KC_MPRV,          \
  KC_NO,   KC_MSTP, KC_MNXT, KC_VOLU, \
  KC_BTN1, KC_MS_U, KC_BTN2,          \
  KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS  \
),
[SFN] = LAYOUT( /* Space Fn */
  /* Left side */
  KC_TRNS,      KC_TRNS,     KC_TRNS,      KC_TRNS,    KC_TRNS,                        \
  RALT(KC_TAB), KC_TRNS,     KC_TRNS,      KC_TRNS,    KC_TRNS,      KC_TRNS, KC_TRNS, \
  KC_TRNS,      RALT(KC_F4), RCTL(KC_F4),  LGUI(KC_E), LGUI(KC_R),   KC_TRNS,          \
  KC_CAPS,      RCTL(KC_A),  RCTL(KC_S),   LGUI(KC_D), RCTL(KC_F),   KC_TRNS,          \
  KC_TRNS,      RCTL(KC_Z),  RCTL(KC_X),   RCTL(KC_C), RCTL(KC_V),   KC_TRNS,          \
  KC_TRNS,      KC_TRNS,     KC_TRNS,      KC_TRNS,                                    \
  /* Right side */
            KC_TRNS, KC_TRNS,           KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    \
            KC_TRNS, KC_TRNS,           KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    \
            KC_TRNS, KC_INS,            KC_UP,    KC_PGUP,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    \
            KC_HOME, KC_LEFT,           KC_DOWN,  KC_RIGHT, KC_END,  KC_TRNS, KC_TRNS,             \
  KC_TRNS,  KC_DEL,  LCTL(LSFT(KC_L)),  KC_TRNS,  KC_PGDN,  KC_TRNS,          KC_TRNS,             \
  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,                    KC_TRNS,             \
  /* Number pad */
  KC_TRNS, KC_TRNS, KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS  \
),
[PROG] = LAYOUT( /* Programming Symbols */
  /* Left side */
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            \
  /* Right side */
           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
           KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
           KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_TRNS, KC_BSLS, KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,          \
  KC_UNDS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,          \
  /* Number pad */
  KC_TRNS, KC_TRNS, KC_TRNS,           \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  \
  KC_TRNS, KC_TRNS, KC_TRNS,           \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  \
  KC_TRNS, KC_TRNS, KC_TRNS,           \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS   \
),
[MAC] = LAYOUT( /* Apple Mac */
  /* Left side */
  KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS,          KC_TRNS,                   \
  KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,          \
  KC_CAPS, KC_TRNS,      KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,          \
  KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,          \
  KC_LGUI, LGUI(KC_SPC), KC_LGUI, LT(PROG, KC_SPC),                            \
  /* Right side */
                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          \
  KC_LGUI,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,          \
  LT(MSFN, KC_SPC), KC_RGUI, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,          \
  /* Number pad */
  KC_TRNS, KC_TRNS, KC_TRNS,           \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  \
  KC_TRNS, KC_TRNS, KC_TRNS,           \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  \
  KC_TRNS, KC_TRNS, KC_TRNS,           \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS   \
),
[MSFN] = LAYOUT( /* Mac Space Fn */
  /* Left side */
  KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                        \
  KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,      KC_TRNS, KC_TRNS, \
  KC_TRNS, LGUI(KC_Q), LGUI(KC_W), LGUI(KC_E), LGUI(KC_SPC), KC_TRNS,          \
  KC_TRNS, LGUI(KC_A), LGUI(KC_S), KC_F11,     KC_TRNS,      KC_TRNS,          \
  KC_TRNS, LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V),   KC_TRNS,          \
  KC_LALT, KC_TRNS,    KC_LGUI,    KC_TRNS,                                    \
  /* Right side */
            KC_TRNS, KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    \
            KC_TRNS, KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    \
            KC_TRNS, KC_INS,       KC_UP,    KC_PGUP,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    \
            KC_HOME, KC_LEFT,      KC_DOWN,  KC_RIGHT, KC_END,  KC_TRNS, KC_TRNS,             \
  KC_TRNS,  KC_DEL,  LSFT(KC_DEL), KC_TRNS,  KC_PGDN,  KC_TRNS,          KC_TRNS,             \
  KC_TRNS,  KC_TRNS, KC_TRNS,      KC_TRNS,  KC_TRNS,                    KC_TRNS,             \
  /* Number pad */
  KC_TRNS, KC_TRNS, KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS,          \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS  \
),
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
      // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  // if (record->event.pressed) {

    // switch(keycode) {
      // case MACRO_CTRL_F:
        // SEND_STRING(SS_LCTRL("f"));
        // layer_on(FIND);
        // return false;

      // case MACRO_CTRL_H:
        // SEND_STRING(SS_LCTRL("h"));
        // layer_on(FIND);
        // return false;

      // case MACRO_CTRL_I:
        // SEND_STRING(SS_LCTRL("i"));
        // layer_on(FIND);
        // return false;

       // case MACRO_RETURN_FROM_FIND:
        // SEND_STRING(SS_TAP(X_ENTER));
        // layer_off(FIND);
        // return false;

    // }

  // }

  return true;

}

void led_set_user(uint8_t usb_led) {

}
