
#pragma once

#include <dt-bindings/zmk/keys.h>

/* 通常入力の記号 */
#define JP_MINS  MINUS          // -
#define JP_CIRC  EQUAL          // ^
#define JP_YEN   INT_YEN        // ¥
#define JP_AT    LEFT_BRACKET   // @
#define JP_LBRC  RIGHT_BRACKET  // [
#define JP_RBRC  NON_US_HASH    // ]
#define JP_SCLN  SEMI           // ;
#define JP_COLN  SQT            // :
#define JP_COMM  COMMA          // ,
#define JP_DOT   DOT            // .
#define JP_SLSH  FSLH           // /
#define JP_BSLS  INT_RO         // backslash

/* Shift付きの記号 */
#define JP_EXLM  LS(N1)         // !
#define JP_DQUO  LS(N2)         // "
#define JP_HASH  LS(N3)         // #
#define JP_DLR   LS(N4)         // $
#define JP_PERC  LS(N5)         // %
#define JP_AMPR  LS(N6)         // &
#define JP_QUOT  LS(N7)         // '
#define JP_LPRN  LS(N8)         // (
#define JP_RPRN  LS(N9)         // )

#define JP_EQL   LS(JP_MINS)    // =
#define JP_TILD  LS(JP_CIRC)    // ~
#define JP_PIPE  LS(JP_YEN)     // |
#define JP_GRV   LS(JP_AT)      // `
#define JP_LCBR  LS(JP_LBRC)    // {
#define JP_RCBR  LS(JP_RBRC)    // }
#define JP_PLUS  LS(JP_SCLN)    // +
#define JP_ASTR  LS(JP_COLN)    // *
#define JP_LABK  LS(JP_COMM)    // <
#define JP_RABK  LS(JP_DOT)     // >
#define JP_QUES  LS(JP_SLSH)    // ?
#define JP_UNDS  LS(JP_BSLS)    // _

/* Windows向け日本語入力キー */
#define JP_ZKHK  GRAVE          // 半角/全角
#define JP_MHEN  INT_MUHENKAN   // 無変換
#define JP_HENK  INT_HENKAN     // 変換
#define JP_KANA  INT_KANA       // ひらがな
