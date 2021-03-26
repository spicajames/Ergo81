#include QMK_KEYBOARD_H


#define BASE 0
#define META 1
#define SYMB 2
#define GAME 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* BASE
   * ,-----------------------------------------.   ,-------------.   ,-----------------------------------------.
   * | F1   | F2   |  F3  |  F4  |  F5  |  F6  |   | Ins  | Bksp |   |  F7  |  F8  |  F9  | F10  | F11  | F12  |
   * |------+------+------+------+------+------|   |------+------|   |-------------+------+------+------+------|
   * | |    |  1   |   2  |   3  |   4  |   5  |   | Home | Pgup |   |  6   |   7  |   8  |   9  |   0  |   -  |
   * |------+------+------+------+------+------|   |------+------|   |------|------+------+------+------+------|
   * | Tab  |   Q  |   W  |   E  |   R  |   T  |   | End  | PgDn |   |  Y   |   U  |   I  |   O  |   P  |   |  |
   * |------+------+------+------+------+------|   |------+------|   |-------------+------+------+------+------|
   * | ESC  |   A  |   S  |   D  |   F  |   G  |   | Del  |  Up  |   |  H   |   J  |   K  |   L  |   ;  |   ´  |
   * |------+------+------+------+------+------|   |------+------|   |------|------+------+------+------+------|
   * | LSft |   Z  |   X  |   C  |   V  |   B  |   | Down | Right|   |  N   |   M  |   ,  |   .  |   /  |Enter |
   * |------+------+------+------+------+------|   |------+------|   |------+------+------+------+------+------|
   * | LCtrl| LGUI | LAlt |      | META |      |   | Left | Space|   |  {   |   }  |      | RAlt | Win  | Ctrl |
   * `-----------------------------------------'   `-------------'   `-----------------------------------------'
   */
  [BASE] = LAYOUT( \
    KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,    KC_INS,  KC_BSPC,   KC_F7,    KC_F8,    KC_F9,   KC_F10,   KC_F11,  KC_F12,   \
    KC_GRV,   KC_1,    KC_2,    KC_3,    KC_4,     KC_5,     KC_HOME, KC_PGUP,   KC_6,     KC_7,     KC_8,    KC_9,     KC_O,    KC_MINS,  \
    KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,     KC_END,  KC_PGDN,   KC_Y,     KC_U,     KC_I,    KC_O,     KC_P,    KC_PIPE,  \
    KC_ESC,   KC_A,    KC_S,    KC_D,    KC_F,     KC_G,     KC_DEL,  KC_UP,     KC_H,     KC_J,     KC_K,    KC_L,     KC_SCLN, KC_QUOTE, \
    KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,     KC_DOWN, KC_RIGHT,  KC_N,     KC_M,     KC_COMM, KC_DOT,   KC_SLSH, KC_ENTER, \
    KC_LCTL,  KC_LGUI, KC_LALT, MO(META),  KC_LEFT, KC_SPC,    KC_LBRC,  KC_RBRC, KC_RALT,  KC_RWIN, KC_LCTL   \
  ),

  /* META
   * ,-----------------------------------------.   ,-------------.   ,-----------------------------------------.
   * | F1   | F2   |  F3  |  F4  |  F5  |  F6  |   | Ins  | Bksp |   |  F7  |  F8  |  F9  | F10  | F11  | F12  |
   * |------+------+------+------+------+------|   |------+------|   |-------------+------+------+------+------|
   * | |    |  1   |   2  |   3  |   4  |   5  |   | Home | Pgup |   |  6   |   7  |   8  |   9  |   0  |   -  |
   * |------+------+------+------+------+------|   |------+------|   |------|------+------+------+------+------|
   * | Tab  |   Q  |   W  |   E  |   R  |   T  |   | End  | PgDn |   |  Y   |   U  |   I  |   O  |   P  |   |  |
   * |------+------+------+------+------+------|   |------+------|   |-------------+------+------+------+------|
   * | ESC  |   A  |   S  |   D  |   F  |   G  |   | Del  |  Up  |   |  H   |   J  |   K  |   L  |   ;  |   ´  |
   * |------+------+------+------+------+------|   |------+------|   |------|------+------+------+------+------|
   * | LSft |   Z  |   X  |   C  |   V  |   B  |   | Down | Right|   |  N   |   M  |   ,  |   .  |   /  |Enter |
   * |------+------+------+------+------+------|   |------+------|   |------+------+------+------+------+------|
   * | LCtrl| LGUI | LAlt |      | META |      |   | Left | Space|   |  {   |   }  |      | RAlt | Win  | Ctrl |
   * `-----------------------------------------'   `-------------'   `-----------------------------------------'
   */
  [META] = LAYOUT( \
   KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,    KC_INS,  KC_BSPC,   KC_F7,    KC_F8,    KC_F9,   KC_F10,   KC_F11,  KC_F12,   \
    KC_GRV,   KC_1,    KC_2,    KC_3,    KC_4,     KC_5,     KC_HOME, KC_PGUP,   KC_6,     KC_7,     KC_8,    KC_9,     KC_O,    KC_MINS,  \
    KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,     KC_END,  KC_PGDN,   KC_Y,     KC_U,     KC_I,    KC_O,     KC_P,    KC_PIPE,  \
    KC_ESC,   KC_A,    KC_S,    KC_D,    KC_F,     KC_G,     KC_DEL,  KC_UP,     KC_H,     KC_J,     KC_K,    KC_L,     KC_SCLN, KC_QUOTE, \
    KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,     KC_DOWN, KC_RIGHT,  KC_N,     KC_M,     KC_COMM, KC_DOT,   KC_SLSH, KC_ENTER, \
    KC_LCTL,  KC_LGUI, KC_LALT, MO(META),  KC_LEFT, KC_SPC,    KC_LBRC,  KC_RBRC, KC_RALT,  KC_RWIN, KC_LCTL   \
  )

};
