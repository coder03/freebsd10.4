/*
 * Automatically generated from sun.us.unix.kbd.
 * DO NOT EDIT!
 *
 * $FreeBSD: release/10.4.0/sys/dev/uart/uart_kbd_sun_tables.h 122470 2003-11-11 07:33:24Z jake $
 */
static keymap_t keymap_sun_us_unix_kbd = { 0x80, {
/*                                                         alt
 * scan                       cntrl          alt    alt   cntrl
 * code  base   shift  cntrl  shift   alt   shift  cntrl  shift    spcl flgs
 * ---------------------------------------------------------------------------
 */
/*00*/{{  NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP, }, 0xFF,0x00 },
/*01*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*02*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*03*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*04*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*05*/{{ F( 1), F(13), F(25), F(37), S( 1), S(11), S( 1), S(11),}, 0xFF,0x00 },
/*06*/{{ F( 2), F(14), F(26), F(38), S( 2), S(12), S( 2), S(12),}, 0xFF,0x00 },
/*07*/{{ F(10), F(22), F(34), F(46), S(10), S(10), S(10), S(10),}, 0xFF,0x00 },
/*08*/{{ F( 3), F(15), F(27), F(39), S( 3), S(13), S( 3), S(13),}, 0xFF,0x00 },
/*09*/{{ F(11), F(23), F(35), F(47), S(11), S(11), S(11), S(11),}, 0xFF,0x00 },
/*0a*/{{ F( 4), F(16), F(28), F(40), S( 4), S(14), S( 4), S(14),}, 0xFF,0x00 },
/*0b*/{{ F(12), F(24), F(36), F(48), S(12), S(12), S(12), S(12),}, 0xFF,0x00 },
/*0c*/{{ F( 5), F(17), F(29), F(41), S( 5), S(15), S( 5), S(15),}, 0xFF,0x00 },
/*0d*/{{ RALT,  RALT,  RALT,  RALT,  RALT,  RALT,  RALT,  RALT, }, 0xFF,0x00 },
/*0e*/{{ F( 6), F(18), F(30), F(42), S( 6), S(16), S( 6), S(16),}, 0xFF,0x00 },
/*0f*/{{  NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP, }, 0xFF,0x00 },
/*10*/{{ F( 7), F(19), F(31), F(43), S( 7), S( 7), S( 7), S( 7),}, 0xFF,0x00 },
/*11*/{{ F( 8), F(20), F(32), F(44), S( 8), S( 8), S( 8), S( 8),}, 0xFF,0x00 },
/*12*/{{ F( 9), F(21), F(33), F(45), S( 9), S( 9), S( 9), S( 9),}, 0xFF,0x00 },
/*13*/{{ LALT,  LALT,  LALT,  LALT,  LALT,  LALT,  LALT,  LALT, }, 0xFF,0x00 },
/*14*/{{ F(50), F(50), F(50), F(50), F(50), F(50), F(50), F(50),}, 0xFF,0x00 },
/*15*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*16*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*17*/{{  SLK,  SPSC,   SLK,  SPSC,  SUSP,   NOP,  SUSP,   NOP, }, 0xFF,0x00 },
/*18*/{{ F(53), F(53), F(53), F(53), F(53), F(53), F(53), F(53),}, 0xFF,0x00 },
/*19*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*1a*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*1b*/{{ F(58), F(58), F(58), F(58), F(58), F(58), F(58), F(58),}, 0xFF,0x00 },
/*1c*/{{ F(55), F(55), F(55), F(55), F(55), F(55), F(55), F(55),}, 0xFF,0x00 },
/*1d*/{{ 0x1B,  0x1B,  0x1B,  0x1B,  0x1B,  0x1B,   DBG,  0x1B, }, 0x02,0x00 },
/*1e*/{{  '1',   '!',   NOP,   NOP,   '1',   '!',   NOP,   NOP, }, 0x33,0x00 },
/*1f*/{{  '2',   '@',  0x00,  0x00,   '2',   '@',  0x00,  0x00, }, 0x00,0x00 },
/*20*/{{  '3',   '#',   NOP,   NOP,   '3',   '#',   NOP,   NOP, }, 0x33,0x00 },
/*21*/{{  '4',   '$',   NOP,   NOP,   '4',   '$',   NOP,   NOP, }, 0x33,0x00 },
/*22*/{{  '5',   '%',   NOP,   NOP,   '5',   '%',   NOP,   NOP, }, 0x33,0x00 },
/*23*/{{  '6',   '^',  0x1E,  0x1E,   '6',   '^',  0x1E,  0x1E, }, 0x00,0x00 },
/*24*/{{  '7',   '&',   NOP,   NOP,   '7',   '&',   NOP,   NOP, }, 0x33,0x00 },
/*25*/{{  '8',   '*',   NOP,   NOP,   '8',   '*',   NOP,   NOP, }, 0x33,0x00 },
/*26*/{{  '9',   '(',   NOP,   NOP,   '9',   '(',   NOP,   NOP, }, 0x33,0x00 },
/*27*/{{  '0',   ')',   NOP,   NOP,   '0',   ')',   NOP,   NOP, }, 0x33,0x00 },
/*28*/{{  '-',   '_',  0x1F,  0x1F,   '-',   '_',  0x1F,  0x1F, }, 0x00,0x00 },
/*29*/{{  '=',   '+',   NOP,   NOP,   '=',   '+',   NOP,   NOP, }, 0x33,0x00 },
/*2a*/{{  '`',   '~',   NOP,   NOP,   '`',   '~',   DBG,   NOP, }, 0x33,0x00 },
/*2b*/{{ 0x7F,  0x7F,  0x08,  0x08,  0x7F,  0x7F,  0x08,  0x08, }, 0x00,0x00 },
/*2c*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*2d*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*2e*/{{  '/',   '/',   '/',   '/',   '/',   '/',   '/',   '/', }, 0x00,0x02 },
/*2f*/{{  '*',   '*',   '*',   '*',   '*',   '*',   '*',   '*', }, 0x00,0x00 },
/*30*/{{  NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP, }, 0xFF,0x00 },
/*31*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*32*/{{ 0x08,   '.',   '.',   '.',   '.',   '.',   RBT,   RBT, }, 0x03,0x02 },
/*33*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*34*/{{ F(49), F(49), F(49), F(49), F(49), F(49), F(49), F(49),}, 0xFF,0x00 },
/*35*/{{ 0x09,  BTAB,   NOP,   NOP,  0x09,  BTAB,   NOP,   NOP, }, 0x77,0x00 },
/*36*/{{  'q',   'Q',  0x11,  0x11,   'q',   'Q',  0x11,  0x11, }, 0x00,0x01 },
/*37*/{{  'w',   'W',  0x17,  0x17,   'w',   'W',  0x17,  0x17, }, 0x00,0x01 },
/*38*/{{  'e',   'E',  0x05,  0x05,   'e',   'E',  0x05,  0x05, }, 0x00,0x01 },
/*39*/{{  'r',   'R',  0x12,  0x12,   'r',   'R',  0x12,  0x12, }, 0x00,0x01 },
/*3a*/{{  't',   'T',  0x14,  0x14,   't',   'T',  0x14,  0x14, }, 0x00,0x01 },
/*3b*/{{  'y',   'Y',  0x19,  0x19,   'y',   'Y',  0x19,  0x19, }, 0x00,0x01 },
/*3c*/{{  'u',   'U',  0x15,  0x15,   'u',   'U',  0x15,  0x15, }, 0x00,0x01 },
/*3d*/{{  'i',   'I',  0x09,  0x09,   'i',   'I',  0x09,  0x09, }, 0x00,0x01 },
/*3e*/{{  'o',   'O',  0x0F,  0x0F,   'o',   'O',  0x0F,  0x0F, }, 0x00,0x01 },
/*3f*/{{  'p',   'P',  0x10,  0x10,   'p',   'P',  0x10,  0x10, }, 0x00,0x01 },
/*40*/{{  '[',   '{',  0x1B,  0x1B,   '[',   '{',  0x1B,  0x1B, }, 0x00,0x00 },
/*41*/{{  ']',   '}',  0x1D,  0x1D,   ']',   '}',  0x1D,  0x1D, }, 0x00,0x00 },
/*42*/{{ 0x7F,  0x7F,  0x08,  0x08,  0x7F,  0x7F,  0x08,  0x08, }, 0x00,0x00 },
/*43*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*44*/{{ F(49),  '7',   '7',   '7',   '7',   '7',   '7',   '7', }, 0x80,0x02 },
/*45*/{{ F(50),  '8',   '8',   '8',   '8',   '8',   '8',   '8', }, 0x80,0x02 },
/*46*/{{ F(51),  '9',   '9',   '9',   '9',   '9',   '9',   '9', }, 0x80,0x02 },
/*47*/{{ F(52),  '-',   '-',   '-',   '-',   '-',   '-',   '-', }, 0x80,0x02 },
/*48*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*49*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*4a*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*4b*/{{  NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP, }, 0xFF,0x00 },
/*4c*/{{ LCTR,  LCTR,  LCTR,  LCTR,  LCTR,  LCTR,  LCTR,  LCTR, }, 0xFF,0x00 },
/*4d*/{{  'a',   'A',  0x01,  0x01,   'a',   'A',  0x01,  0x01, }, 0x00,0x01 },
/*4e*/{{  's',   'S',  0x13,  0x13,   's',   'S',  0x13,  0x13, }, 0x00,0x01 },
/*4f*/{{  'd',   'D',  0x04,  0x04,   'd',   'D',  0x04,  0x04, }, 0x00,0x01 },
/*50*/{{  'f',   'F',  0x06,  0x06,   'f',   'F',  0x06,  0x06, }, 0x00,0x01 },
/*51*/{{  'g',   'G',  0x07,  0x07,   'g',   'G',  0x07,  0x07, }, 0x00,0x01 },
/*52*/{{  'h',   'H',  0x08,  0x08,   'h',   'H',  0x08,  0x08, }, 0x00,0x01 },
/*53*/{{  'j',   'J',  0x0A,  0x0A,   'j',   'J',  0x0A,  0x0A, }, 0x00,0x01 },
/*54*/{{  'k',   'K',  0x0B,  0x0B,   'k',   'K',  0x0B,  0x0B, }, 0x00,0x01 },
/*55*/{{  'l',   'L',  0x0C,  0x0C,   'l',   'L',  0x0C,  0x0C, }, 0x00,0x01 },
/*56*/{{  ';',   ':',   NOP,   NOP,   ';',   ':',   NOP,   NOP, }, 0x33,0x00 },
/*57*/{{ '\'',   '"',   NOP,   NOP,  '\'',   '"',   NOP,   NOP, }, 0x33,0x00 },
/*58*/{{ '\\',   '|',  0x1C,  0x1C,  '\\',   '|',  0x1C,  0x1C, }, 0x00,0x00 },
/*59*/{{ 0x0D,  0x0D,  0x0A,  0x0A,  0x0D,  0x0D,  0x0A,  0x0A, }, 0x00,0x00 },
/*5a*/{{ 0x0D,  0x0D,  0x0A,  0x0A,  0x0D,  0x0D,  0x0A,  0x0A, }, 0x00,0x00 },
/*5b*/{{ F(53),  '4',   '4',   '4',   '4',   '4',   '4',   '4', }, 0x80,0x02 },
/*5c*/{{ F(54),  '5',   '5',   '5',   '5',   '5',   '5',   '5', }, 0x80,0x02 },
/*5d*/{{ F(55),  '6',   '6',   '6',   '6',   '6',   '6',   '6', }, 0x80,0x02 },
/*5e*/{{ F(60),  '0',   '0',   '0',   '0',   '0',   '0',   '0', }, 0x80,0x02 },
/*5f*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*60*/{{ F(51), F(51), F(51), F(51), F(51), F(51), F(51), F(51),}, 0xFF,0x00 },
/*61*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*62*/{{  NLK,   NLK,   NLK,   NLK,   NLK,   NLK,   NLK,   NLK, }, 0xFF,0x00 },
/*63*/{{  LSH,   LSH,   LSH,   LSH,   LSH,   LSH,   LSH,   LSH, }, 0xFF,0x00 },
/*64*/{{  'z',   'Z',  0x1A,  0x1A,   'z',   'Z',  0x1A,  0x1A, }, 0x00,0x01 },
/*65*/{{  'x',   'X',  0x18,  0x18,   'x',   'X',  0x18,  0x18, }, 0x00,0x01 },
/*66*/{{  'c',   'C',  0x03,  0x03,   'c',   'C',  0x03,  0x03, }, 0x00,0x01 },
/*67*/{{  'v',   'V',  0x16,  0x16,   'v',   'V',  0x16,  0x16, }, 0x00,0x01 },
/*68*/{{  'b',   'B',  0x02,  0x02,   'b',   'B',  0x02,  0x02, }, 0x00,0x01 },
/*69*/{{  'n',   'N',  0x0E,  0x0E,   'n',   'N',  0x0E,  0x0E, }, 0x00,0x01 },
/*6a*/{{  'm',   'M',  0x0D,  0x0D,   'm',   'M',  0x0D,  0x0D, }, 0x00,0x01 },
/*6b*/{{  ',',   '<',   NOP,   NOP,   ',',   '<',   NOP,   NOP, }, 0x33,0x00 },
/*6c*/{{  '.',   '>',   NOP,   NOP,   '.',   '>',   NOP,   NOP, }, 0x33,0x00 },
/*6d*/{{  '/',   '?',   NOP,   NOP,   '/',   '?',   NOP,   NOP, }, 0x33,0x00 },
/*6e*/{{  RSH,   RSH,   RSH,   RSH,   RSH,   RSH,   RSH,   RSH, }, 0xFF,0x00 },
/*6f*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*70*/{{ F(57),  '1',   '1',   '1',   '1',   '1',   '1',   '1', }, 0x80,0x02 },
/*71*/{{ F(58),  '2',   '2',   '2',   '2',   '2',   '2',   '2', }, 0x80,0x02 },
/*72*/{{ F(59),  '3',   '3',   '3',   '3',   '3',   '3',   '3', }, 0x80,0x02 },
/*73*/{{  NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP, }, 0xFF,0x00 },
/*74*/{{  NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP, }, 0xFF,0x00 },
/*75*/{{  NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP, }, 0xFF,0x00 },
/*76*/{{ 0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, }, 0x00,0x00 },
/*77*/{{  CLK,   CLK,   CLK,   CLK,   CLK,   CLK,   CLK,   CLK, }, 0xFF,0x00 },
/*78*/{{ META,  META,  META,  META,  META,  META,  META,  META, }, 0xFF,0x00 },
/*79*/{{  ' ',   ' ',  0x00,   ' ',   ' ',   ' ',  SUSP,   ' ', }, 0x02,0x00 },
/*7a*/{{ META,  META,  META,  META,  META,  META,  META,  META, }, 0xFF,0x00 },
/*7b*/{{ F(59), F(59), F(59), F(59), F(59), F(59), F(59), F(59),}, 0xFF,0x00 },
/*7c*/{{  NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP, }, 0xFF,0x00 },
/*7d*/{{ F(56),  '+',   '+',   '+',   '+',   '+',   '+',   '+', }, 0x80,0x02 },
/*7e*/{{  NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP, }, 0xFF,0x00 },
/*7f*/{{  NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP,   NOP, }, 0xFF,0x00 },
} };

static accentmap_t accentmap_sun_us_unix_kbd = { 0 };
