#ifndef KEYMAP_BEPO_H
#define KEYMAP_BEPO_H

#include "keymap_common.h"

#define ALGR(kc) RALT(kc)
#define NO_ALGR KC_RALT

#define BP_A    KC_A
#define BP_B    KC_Q
#define BP_C    KC_H
#define BP_D    KC_I
#define BP_E    KC_F
#define BP_F    KC_SLSH
#define BP_G    KC_COMM
#define BP_H    KC_DOT
#define BP_I    KC_D
#define BP_J    KC_P
#define BP_K    KC_B
#define BP_L    KC_O
#define BP_M    KC_QUOT
#define BP_N    KC_SCLN
#define BP_O    KC_R
#define BP_P    KC_E
#define BP_Q    KC_M
#define BP_R    KC_L
#define BP_S    KC_K
#define BP_T    KC_J
#define BP_U    KC_S
#define BP_V    KC_U
#define BP_W    KC_RBRC
#define BP_X    KC_C
#define BP_Y    KC_X
#define BP_Z    KC_LBRC

#define BP_1    LSFT(BP_QUOT)
#define BP_2    LSFT(BP_LFQU)
#define BP_3    LSFT(BP_RFQU)
#define BP_4    LSFT(BP_LPRN)
#define BP_5    LSFT(BP_RPRN)
#define BP_6    LSFT(BP_AT)
#define BP_7    LSFT(BP_PLUS)
#define BP_8    LSFT(BP_MINS)
#define BP_9    LSFT(BP_SLSH)
#define BP_0    LSFT(BP_ASTR)

#define BP_CCED KC_BSLS
#define BP_PERC KC_EQL
#define BP_QUOT KC_1
#define BP_LFQU KC_2
#define BP_RFQU KC_3
#define BP_LPRN KC_4
#define BP_RPRN KC_5
#define BP_AT   KC_6
#define BP_PLUS KC_7
#define BP_MINS KC_8
#define BP_SLSH KC_9
#define BP_ASTR KC_0

#define BP_BSLS ALGR(BP_AGRV)
#define BP_EXLM LSFT(BP_CIRC)
#define BP_LCBR ALGR(BP_Y)
#define BP_RCBR ALGR(BP_X)
#define BP_PIPE ALGR(BP_B)
#define BP_HASH LSFT(BP_DLR)
#define BP_DLR  KC_GRV
#define BP_GRV  LSFT(BP_PERC)
#define BP_LBRC ALGR(BP_LCBR)
#define BP_RBRC ALGR(BP_RCBR)
#define BP_TILD ALGR(BP_N)

#define BP_EACU KC_W
#define BP_EGRV KC_T
#define BP_COMM KC_G
#define BP_AGRV KC_Z
#define BP_DOT  KC_V
#define BP_EQL  KC_MINS
#define BP_CIRC KC_Y
#define BP_APOS KC_N

#endif
