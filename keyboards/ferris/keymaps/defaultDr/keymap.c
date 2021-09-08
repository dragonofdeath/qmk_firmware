#include QMK_KEYBOARD_H

enum unicode_names {
    SNEK,
    EURO,
    LT_S_A,
    LT_L_A,
    LT_S_C,
    LT_L_C,
    LT_S_E1,
    LT_L_E1,
    LT_S_E2,
    LT_L_E2,
    LT_S_I,
    LT_L_I,
    LT_S_S,
    LT_L_S,
    LT_S_U1,
    LT_L_U1,
    LT_S_U2,
    LT_L_U2,
    LT_S_Z,
    LT_L_Z,
    LT_OB,
    LT_CB,
};

const uint32_t PROGMEM unicode_map[] = {
    [SNEK]  = 0x1F40D, // 🐍
    [EURO]  = 0x20ac, // €
    [LT_S_A] = 0x105, // ą
    [LT_L_A] = 0x104, // Ą
    [LT_S_C] = 0x10d, // č
    [LT_L_C] = 0x10c, // Č
    [LT_S_E1] = 0x119, // ę
    [LT_L_E1] = 0x118, // Ę
    [LT_S_E2] = 0x117, // ė
    [LT_L_E2] = 0x116, // Ė
    [LT_S_I] = 0x12f, // į
    [LT_L_I] = 0x12e, // Į
    [LT_S_S] = 0x161, // š
    [LT_L_S] = 0x160, // Š'
    [LT_S_U1] = 0x173, // ų
    [LT_L_U1] = 0x172, // Ų
    [LT_S_U2] = 0x16b, // ū
    [LT_L_U2] = 0x16a, // Ū
    [LT_S_Z] = 0x17e, // ž
    [LT_L_Z] = 0x17d, // Ž
    [LT_OB] = 0x201e, // „
    [LT_CB] = 0x201c, // “
};

#define K_SNEK      X(SNEK)
#define K_EURO      X(EURO)
#define K_LT_A      XP(LT_S_A, LT_L_A)
#define K_LT_C      XP(LT_S_C, LT_L_C)
#define K_LT_E1     XP(LT_S_E1, LT_L_E1)
#define K_LT_E2     XP(LT_S_E2, LT_L_E2)
#define K_LT_I      XP(LT_S_I, LT_L_I)
#define K_LT_S      XP(LT_S_S, LT_L_S)
#define K_LT_U1     XP(LT_S_U1, LT_L_U1)
#define K_LT_U2     XP(LT_S_U2, LT_L_U2)
#define K_LT_Z      XP(LT_S_Z, LT_L_Z)
#define K_LT_OB     X(LT_OB)
#define K_LT_CB     X(LT_CB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
      KC_Q, KC_W, KC_E, LGUI_T(KC_R), KC_T,/**/ KC_Y, RGUI_T(KC_U), KC_I, KC_O, KC_P,
      LSFT_T(KC_A), LT(5,KC_S), LT(1,KC_D), LT(3,KC_F), KC_G, /**/ KC_H, LT(4,KC_J), LT(2,KC_K), LT(6,KC_L), LSFT_T(KC_SCLN),
      KC_Z, LCTL_T(KC_X), LALT_T(KC_C), KC_V, KC_B,/**/ KC_N, KC_M, LALT_T(KC_COMM), LCTL_T(KC_DOT), KC_SLSH,
      KC_TAB, KC_SPC, LT(7,KC_ENT), KC_BSPC
  ),

  [1] = LAYOUT(
      _______, _______, _______, _______, _______, /**/ KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,
      _______, _______, KC_NO, _______, _______, /**/ KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______,
      _______, _______, _______, _______, _______, /**/ _______, _______, KC_PGDN, _______, _______,
      _______, _______, _______, _______
  ),
/* - ū ė ę */
/* ą š ų į */
/* z - č */ 
  [2] = LAYOUT(
      _______, K_LT_U2, K_LT_E2, K_LT_E1, _______,/**/ _______, _______, _______, _______, _______,
      K_LT_A, K_LT_S, K_LT_U1, K_LT_I, _______,/**/  _______, KC_LGUI, KC_NO, LCTL(KC_LALT), LCA(KC_LSFT),
      K_LT_Z, _______, K_LT_C, _______, _______,/**/  _______, _______, _______, _______, _______,
      _______, _______, _______, _______
  ),

  [3] = LAYOUT(
      _______, _______, _______, _______, _______,/**/  _______, KC_UNDS, KC_PIPE, KC_QUOT, _______,
      KC_CIRC, KC_ASTR, KC_AMPR, KC_NO, _______, /**/ KC_HASH, KC_TILD, KC_SLSH, KC_DQUO, KC_DLR,
      _______, _______, _______, _______, _______, /**/ _______, KC_MINS, KC_BSLS, KC_GRV, _______,
      _______, _______, _______, _______
  ),

  [4] = LAYOUT(
      _______, KC_COLN, KC_LT, KC_GT, KC_SCLN,/**/  _______, _______, _______, _______, _______,
      KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_AT,/**/  _______, KC_NO, KC_EQL, KC_PLUS, KC_PERC,
      _______, KC_EXLM, KC_LBRC, KC_RBRC, _______,/**/  _______, _______, _______, _______, _______,
      KC_VOLD, _______, _______, KC_VOLU
  ),

  [5] = LAYOUT(
      _______, _______, _______, _______, _______, /**/ _______, KC_F7, KC_F8, KC_F9, KC_F10,
      _______, KC_NO, LCTL(KC_LALT), _______, _______,/**/  _______, KC_F4, KC_F5, KC_F6, KC_F11,
      _______, _______, _______, _______, _______,/**/  _______, KC_F1, KC_F2, KC_F3, KC_F12,
      _______, _______, _______, _______
  ),

  [6] = LAYOUT(
  KC_PSLS, KC_7, KC_8, KC_9, KC_PPLS, /**/ _______, _______, _______, _______, _______,
  KC_0, KC_1, KC_2, KC_3, KC_PMNS, /**/ _______, _______, _______, KC_NO, _______,
  KC_PAST, KC_4, KC_5, KC_6, KC_PEQL, /**/ _______, _______, _______, _______, _______,
  _______, _______, _______, _______
  ),

  [7] = LAYOUT(
      _______, _______, KC_COLN, KC_ESC, _______,/**/  _______, _______, _______, _______, KC_DEL,
      _______, KC_PERC, KC_SLSH, KC_ENT, _______,/**/  DF(1), KC_LGUI, _______, _______, _______,
      _______, _______, _______, KC_EXLM, _______,/**/  DF(0), _______, RALT_T(KC_COMM), RCTL_T(KC_DOT), RESET,
      _______, KC_TAB, KC_NO, _______
  )
};
