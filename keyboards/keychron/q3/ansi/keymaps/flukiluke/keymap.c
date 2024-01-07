/* Copyright 2022 @ Keychron (https://www.keychron.com)
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

#include QMK_KEYBOARD_H

/*
 LAYOUT_tkl_ansi(
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______),
*/

enum layers{
    LBSE,
    LTB,
    LFN,
    LNP,
};

#define MT_CTES LCTL_T(KC_ESC)
#define LT_TAB  LT(LTB, KC_TAB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LBSE] = LAYOUT_tkl_ansi(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        LT_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        MT_CTES,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(LFN),  KC_RWIN,  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),
    [LTB] = LAYOUT_tkl_ansi(
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_BSPC,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_ENT,   _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______),
    [LFN] = LAYOUT_tkl_ansi(
        XXXXXXX,            KC_BRID,  KC_BRIU,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  XXXXXXX,  XXXXXXX,  QK_MAKE,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        KC_CAPS,  XXXXXXX,  SE_TOGG,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,
        XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  OSL(LNP), XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,            XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,                                XXXXXXX,                                XXXXXXX,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX),
    [LNP] = LAYOUT_tkl_ansi(
        XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  KC_P1,    KC_P2,    KC_P3,    KC_P4,    KC_P5,    KC_P6,    KC_P7,    KC_P8,    KC_P9,    KC_P0,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_PPLS,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  KC_PAST,  KC_PSLS,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            KC_PENT,
        XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_NUM,   KC_PMNS,  XXXXXXX,  KC_PDOT,  XXXXXXX,            XXXXXXX,            XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,                                XXXXXXX,                                XXXXXXX,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX),
};

void keyboard_post_init_user(void) {
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv_noeeprom(HSV_OFF);
    secure_unlock();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (secure_is_locked() && !(keycode == SE_TOGG || keycode == MO(LFN))) {
        return false;
    }
    return true;
}

bool rgb_matrix_indicators_user(void) {
    if (secure_is_locked()) {
        for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
            rgb_matrix_set_color(i, RGB_RED);
        }
        return false;
    }

    switch (get_highest_layer(layer_state)) {
        case LNP:
            for (int i = 0x11; i <= 0x1a; i++) {
                rgb_matrix_set_color(i, RGB_BLUE); // Digits
            }
            rgb_matrix_set_color(0x2b, RGB_BLUE); // P
            rgb_matrix_set_color(0x33, RGB_BLUE); // A
            rgb_matrix_set_color(0x34, RGB_BLUE); // S
            rgb_matrix_set_color(0x3e, RGB_BLUE); // Enter
            rgb_matrix_set_color(0x46, RGB_BLUE); // M
            rgb_matrix_set_color(0x48, RGB_BLUE); // .
            if (host_keyboard_led_state().num_lock) {
                rgb_matrix_set_color(0x45, RGB_GREEN); // N
            }
            else {
                rgb_matrix_set_color(0x45, RGB_BLUE); // N
            }
            break;
        case LFN:
            rgb_matrix_set_color(0x01, RGB_BLUE); // F1
            rgb_matrix_set_color(0x02, RGB_BLUE); // F2
            rgb_matrix_set_color(0x07, RGB_BLUE); // F7
            rgb_matrix_set_color(0x08, RGB_BLUE); // F8
            rgb_matrix_set_color(0x09, RGB_BLUE); // F9
            rgb_matrix_set_color(0x0a, RGB_BLUE); // F10
            rgb_matrix_set_color(0x0b, RGB_BLUE); // F11
            rgb_matrix_set_color(0x0c, RGB_BLUE); // F12
            rgb_matrix_set_color(0x0f, RGB_BLUE); // Break
            rgb_matrix_set_color(0x32, RGB_BLUE); // Caps
            rgb_matrix_set_color(0x34, RGB_BLUE); // S
            rgb_matrix_set_color(0x45, RGB_BLUE); // N
            break;
        case LTB:
            rgb_matrix_set_color(0x28, RGB_BLUE); // U
            rgb_matrix_set_color(0x38, RGB_BLUE); // H
            rgb_matrix_set_color(0x39, RGB_BLUE); // J
            rgb_matrix_set_color(0x3a, RGB_BLUE); // K
            rgb_matrix_set_color(0x3b, RGB_BLUE); // L
            rgb_matrix_set_color(0x3c, RGB_BLUE); // ;
            break;
        default:
            if (host_keyboard_led_state().caps_lock) {
                rgb_matrix_set_color(0x32, RGB_GREEN);
            }
            break;
    }
    return true; // Suppress q3 caps lock behaviour
}
