// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const uint8_t Roboto_Bold_24Bitmaps[] PROGMEM = {

	// Bitmap Data:
	0x00, // ' '
	0xFF,0xFF,0xFF,0xFF,0x81,0xFF,0xE0, // '!'
	0xCF,0x3C,0xF3,0xCF,0x30, // '"'
	0x0E,0x60,0x63,0x03,0x38,0x19,0x80,0xCC,0x7F,0xFF,0xFF,0xE3,0x38,0x19,0x80,0xCC,0x3F,0xFD,0xFF,0xE3,0x18,0x19,0xC0,0xCC,0x06,0x60,0x73,0x00, // '#'
	0x06,0x00,0x60,0x06,0x00,0xF8,0x3F,0xC7,0xFE,0x78,0xF7,0x0F,0x70,0x07,0xC0,0x3F,0x01,0xFC,0x07,0xE0,0x1E,0x00,0xFF,0x0F,0xF0,0xF7,0xFE,0x3F,0xE1,0xF8,0x06,0x00,0x60, // '$'
	0x3C,0x00,0x7E,0x10,0xE7,0x38,0xE7,0x30,0xE7,0x70,0xE7,0x60,0x7E,0xC0,0x3C,0xC0,0x01,0x80,0x03,0xBC,0x03,0x7E,0x06,0x67,0x06,0xE3,0x0C,0xE3,0x1C,0x67,0x08,0x7E,0x00,0x3C, // '%'
	0x0F,0x00,0x7F,0x80,0xFF,0x03,0xCE,0x07,0x0C,0x07,0x38,0x0E,0xE0,0x0F,0x80,0x3E,0x00,0xFE,0x3B,0xDE,0xE7,0x1F,0xCE,0x1F,0x9E,0x1E,0x3F,0xFC,0x3F,0xFC,0x1F,0xBE, // '&'
	0xFF,0xF0, // '''
	0x04,0x1C,0x71,0xC3,0x8E,0x1C,0x38,0x61,0xC3,0x87,0x0E,0x1C,0x38,0x30,0x70,0xE1,0xC1,0xC3,0x83,0x83,0x82, // '('
	0x41,0xC1,0xC1,0xC3,0x83,0x87,0x0E,0x0E,0x1C,0x38,0x70,0xE1,0xC3,0x87,0x1C,0x38,0x71,0xC3,0x8E,0x38,0x20, // ')'
	0x0E,0x00,0xC2,0x18,0x3B,0xEF,0xFE,0x1C,0x07,0xC1,0xDC,0x71,0x82,0x20, // '*'
	0x0E,0x01,0xC0,0x38,0x07,0x00,0xE1,0xFF,0xFF,0xFF,0xFF,0x0E,0x01,0xC0,0x38,0x07,0x00,0xE0, // '+'
	0x39,0xCE,0x67,0x3B,0x80, // ','
	0xFF,0xFF,0xF8, // '-'
	0xFF,0xF0, // '.'
	0x03,0x81,0x81,0xC0,0xC0,0x60,0x70,0x30,0x38,0x1C,0x0C,0x0E,0x07,0x03,0x03,0x81,0xC0,0xC0,0xE0,0x70,0x00, // '/'
	0x1F,0x83,0xFC,0x7F,0xE7,0x9E,0xF0,0xEF,0x0F,0xF0,0xFF,0x0F,0xF0,0xFF,0x0F,0xF0,0xFF,0x0F,0xF0,0xF7,0x1E,0x7F,0xE3,0xFC,0x1F,0x80, // '0'
	0x02,0x3D,0xFF,0xFF,0xF1,0xC3,0x87,0x0E,0x1C,0x38,0x70,0xE1,0xC3,0x87,0x0E, // '1'
	0x1F,0x83,0xFC,0x7F,0xEF,0x1E,0xE0,0xEE,0x0E,0x00,0xE0,0x1E,0x03,0xC0,0x78,0x0F,0x01,0xE0,0x3C,0x07,0x80,0xFF,0xFF,0xFF,0xFF,0xF0, // '2'
	0x1F,0x07,0xFC,0x7F,0xEF,0x1E,0xE0,0xE0,0x0E,0x01,0xE0,0xFC,0x0F,0x80,0xFE,0x00,0xE0,0x0F,0xE0,0xFF,0x0F,0xFF,0xE7,0xFC,0x1F,0x80, // '3'
	0x03,0xC0,0x3C,0x07,0xC0,0x7C,0x0F,0xC1,0xDC,0x1D,0xC3,0x9C,0x39,0xC7,0x1C,0xE1,0xCF,0xFF,0xFF,0xFF,0xFF,0x01,0xC0,0x1C,0x01,0xC0, // '4'
	0x3F,0xE3,0xFE,0x7F,0xE7,0x00,0x70,0x07,0x00,0x77,0x87,0xFE,0x7F,0xE3,0x0F,0x00,0xF0,0x0F,0xF0,0xF7,0x0F,0x7F,0xE3,0xFC,0x0F,0x80, // '5'
	0x03,0x80,0xF8,0x1F,0x83,0xE0,0x78,0x07,0x00,0x77,0x8F,0xFE,0xFF,0xEF,0x0F,0xF0,0xFF,0x07,0x70,0xF7,0x8F,0x7F,0xE3,0xFC,0x0F,0x80, // '6'
	0xFF,0xFF,0xFF,0xFF,0xF0,0x0E,0x01,0xE0,0x1C,0x01,0xC0,0x38,0x03,0x80,0x78,0x07,0x00,0xF0,0x0E,0x01,0xE0,0x1C,0x03,0xC0,0x38,0x00, // '7'
	0x1F,0x83,0xFC,0x7F,0xE7,0x9E,0x70,0xE7,0x0E,0x79,0xE3,0xFC,0x1F,0x87,0xFE,0x70,0xEF,0x0F,0xF0,0xFF,0x0F,0x7F,0xE7,0xFE,0x1F,0x80, // '8'
	0x1F,0x03,0xFC,0x7F,0xE7,0x1E,0xF0,0xEF,0x0F,0xF0,0xFF,0x0F,0x7F,0xF7,0xFF,0x1E,0xE0,0x0E,0x01,0xE0,0x3C,0x1F,0x81,0xF0,0x1C,0x00, // '9'
	0xFF,0xF0,0x00,0x03,0xFF,0xC0, // ':'
	0x39,0xDE,0x70,0x00,0x00,0x00,0x00,0x73,0x9C,0xCE,0x77,0x00, // ';'
	0x00,0xC0,0xF0,0xFD,0xFE,0xFC,0x38,0x0F,0xC1,0xFE,0x0F,0xC0,0xF0,0x0C, // '<'
	0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x3F,0xFF,0xFF,0xFF, // '='
	0xC0,0x1E,0x03,0xF8,0x3F,0xC0,0xFE,0x03,0xC3,0xFB,0xFC,0xFE,0x1E,0x03,0x00,0x00, // '>'
	0x3F,0x1F,0xEF,0xFF,0x8F,0x01,0xC0,0xF0,0x78,0x3C,0x0E,0x07,0x01,0xC0,0x00,0x00,0x07,0x01,0xC0,0x78,0x1C,0x00, // '?'
	0x01,0xF8,0x00,0xFF,0xC0,0x78,0x1E,0x1E,0x00,0xC3,0x00,0x0C,0xE1,0xF1,0xD8,0x7F,0x1F,0x1C,0xE3,0xC3,0x1C,0x78,0xE3,0x8F,0x1C,0x71,0xE3,0x0C,0x3C,0x61,0x87,0x8E,0x30,0xF1,0xCE,0x37,0x1F,0xFE,0xE1,0xCF,0x0E,0x00,0x01,0xC0,0x00,0x1E,0x04,0x00,0xFF,0x80,0x07,0xE8,0x00, // '@'
	0x03,0xC0,0x03,0xC0,0x07,0xE0,0x07,0xE0,0x07,0xE0,0x0F,0xF0,0x0E,0x70,0x0E,0x78,0x1E,0x78,0x1C,0x38,0x3C,0x3C,0x3F,0xFC,0x3F,0xFC,0x7F,0xFE,0x78,0x1E,0x70,0x0F,0xF0,0x0F, // 'A'
	0xFF,0xC7,0xFF,0x3F,0xFD,0xE1,0xFF,0x07,0xF8,0x3F,0xC3,0xDF,0xFE,0xFF,0xE7,0xFF,0xBC,0x1F,0xE0,0xFF,0x07,0xF8,0x3F,0xFF,0xFF,0xFE,0xFF,0xC0, // 'B'
	0x0F,0xC0,0x7F,0xC3,0xFF,0x9E,0x1E,0x70,0x3F,0xC0,0xFF,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x0F,0x70,0x3D,0xE1,0xE3,0xFF,0x87,0xFC,0x0F,0xC0, // 'C'
	0xFF,0x07,0xFE,0x3F,0xF9,0xC3,0xCE,0x0F,0x70,0x3B,0x81,0xDC,0x0F,0xE0,0x7F,0x03,0xF8,0x1D,0xC0,0xEE,0x0F,0x70,0xF3,0xFF,0x9F,0xF8,0xFF,0x00, // 'D'
	0xFF,0xFF,0xFF,0xFF,0xF0,0x0E,0x01,0xC0,0x38,0x07,0xFE,0xFF,0xDF,0xFB,0x80,0x70,0x0E,0x01,0xC0,0x3F,0xFF,0xFF,0xFF,0xE0, // 'E'
	0xFF,0xFF,0xFF,0xFF,0xF0,0x0E,0x01,0xC0,0x38,0x07,0xFE,0xFF,0xDF,0xFB,0x80,0x70,0x0E,0x01,0xC0,0x38,0x07,0x00,0xE0,0x00, // 'F'
	0x0F,0xC0,0x7F,0xC3,0xFF,0x9E,0x1E,0xF0,0x3F,0xC0,0x0F,0x00,0x3C,0x00,0xF1,0xFF,0xC7,0xFF,0x1F,0xFC,0x0F,0xF0,0x3D,0xE0,0xF3,0xFF,0xC7,0xFE,0x0F,0xE0, // 'G'
	0xE0,0x3F,0x01,0xF8,0x0F,0xC0,0x7E,0x03,0xF0,0x1F,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x0F,0xC0,0x7E,0x03,0xF0,0x1F,0x80,0xFC,0x07,0xE0,0x38, // 'H'
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0, // 'I'
	0x00,0xF0,0x0F,0x00,0xF0,0x0F,0x00,0xF0,0x0F,0x00,0xF0,0x0F,0x00,0xF0,0x0F,0x00,0xF0,0x0F,0xF0,0xF7,0x1E,0x7F,0xE3,0xFC,0x1F,0x80, // 'J'
	0xF0,0x7F,0xC1,0xEF,0x0F,0x3C,0x78,0xF3,0xE3,0xCF,0x0F,0x78,0x3F,0xC0,0xFF,0x83,0xFE,0x0F,0xBC,0x3E,0x78,0xF1,0xE3,0xC3,0xCF,0x07,0xBC,0x1E,0xF0,0x3C, // 'K'
	0xE0,0x1C,0x03,0x80,0x70,0x0E,0x01,0xC0,0x38,0x07,0x00,0xE0,0x1C,0x03,0x80,0x70,0x0E,0x01,0xC0,0x3F,0xFF,0xFF,0xFF,0xE0, // 'L'
	0xF0,0x07,0xFC,0x07,0xFE,0x03,0xFF,0x01,0xFF,0xC1,0xFF,0xE0,0xFF,0xF0,0x7F,0xDC,0x77,0xEE,0x3B,0xF3,0x39,0xF9,0xDC,0xFC,0xEE,0x7E,0x3E,0x3F,0x1F,0x1F,0x8F,0x8F,0xC3,0x87,0xE1,0xC3,0x80, // 'M'
	0xE0,0x3F,0x81,0xFE,0x0F,0xF0,0x7F,0xC3,0xFE,0x1F,0xF8,0xFD,0xE7,0xE7,0x3F,0x3D,0xF8,0xEF,0xC3,0xFE,0x1F,0xF0,0x7F,0x83,0xFC,0x0F,0xE0,0x38, // 'N'
	0x07,0xC0,0x3F,0xE0,0xFF,0xE3,0xE3,0xE7,0x83,0xCE,0x03,0xBC,0x07,0xF8,0x0F,0xF0,0x1F,0xE0,0x3F,0xC0,0x7B,0x80,0xE7,0x83,0xCF,0x8F,0x8F,0xFE,0x0F,0xF8,0x07,0xC0, // 'O'
	0xFF,0xC7,0xFF,0xBF,0xFD,0xE0,0xFF,0x03,0xF8,0x1F,0xC0,0xFE,0x0F,0xFF,0xFF,0xFF,0xBF,0xF1,0xE0,0x0F,0x00,0x78,0x03,0xC0,0x1E,0x00,0xF0,0x00, // 'P'
	0x07,0xC0,0x3F,0xE0,0xFF,0xE3,0xE3,0xE7,0x83,0xDE,0x03,0xBC,0x07,0xF8,0x0F,0xF0,0x1F,0xE0,0x3F,0xC0,0x7F,0x80,0xE7,0x83,0xCF,0x8F,0x8F,0xFE,0x0F,0xF8,0x07,0xF8,0x00,0x78,0x00,0x78,0x00,0x40, // 'Q'
	0xFF,0xC3,0xFF,0xCF,0xFF,0x3C,0x1E,0xF0,0x7B,0xC1,0xEF,0x07,0xBC,0x1E,0xFF,0xF3,0xFF,0x8F,0xFC,0x3C,0x78,0xF1,0xE3,0xC3,0xCF,0x07,0x3C,0x1E,0xF0,0x3C, // 'R'
	0x0F,0xC1,0xFF,0x1F,0xFC,0xF0,0xFF,0x07,0xB8,0x01,0xF0,0x07,0xF0,0x1F,0xE0,0x3F,0x80,0x3E,0x00,0xFF,0x07,0xFC,0x3D,0xFF,0xC7,0xFE,0x0F,0xC0, // 'S'
	0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xE0,0x03,0x80,0x0E,0x00,0x38,0x00,0xE0,0x03,0x80,0x0E,0x00,0x38,0x00,0xE0,0x03,0x80,0x0E,0x00,0x38,0x00,0xE0,0x03,0x80, // 'T'
	0xF0,0x3F,0xC0,0xFF,0x03,0xFC,0x0F,0xF0,0x3F,0xC0,0xFF,0x03,0xFC,0x0F,0xF0,0x3F,0xC0,0xFF,0x03,0xFC,0x0F,0x70,0x39,0xE1,0xE7,0xFF,0x8F,0xFC,0x0F,0xC0, // 'U'
	0xF0,0x0F,0x78,0x1E,0x78,0x1E,0x78,0x1E,0x38,0x3C,0x3C,0x3C,0x1C,0x3C,0x1C,0x38,0x1E,0x78,0x0E,0x70,0x0E,0x70,0x0F,0xF0,0x07,0xE0,0x07,0xE0,0x07,0xE0,0x03,0xC0,0x03,0xC0, // 'V'
	0xF0,0x70,0x7B,0x83,0x83,0x9C,0x3E,0x1C,0xF1,0xF1,0xE7,0x8F,0x8F,0x1C,0x7C,0x70,0xE3,0x73,0x87,0x3B,0x9C,0x3D,0xDD,0xE0,0xEE,0xEF,0x07,0x63,0x70,0x3F,0x1F,0x81,0xF8,0xFC,0x0F,0xC7,0xE0,0x3C,0x1E,0x01,0xE0,0xF0,0x0F,0x07,0x80, // 'W'
	0xF8,0x1E,0xF0,0x78,0xF1,0xE1,0xE3,0xC1,0xEF,0x01,0xDE,0x03,0xF8,0x03,0xE0,0x07,0xC0,0x0F,0xC0,0x3F,0x80,0x77,0x81,0xEF,0x07,0x8F,0x0F,0x0F,0x3C,0x1E,0xF8,0x1E, // 'X'
	0xF0,0x1E,0xF0,0x79,0xE0,0xF1,0xC3,0xC3,0xC7,0x03,0x9E,0x07,0xB8,0x07,0xF0,0x0F,0xC0,0x0F,0x80,0x1E,0x00,0x1C,0x00,0x38,0x00,0x70,0x00,0xE0,0x01,0xC0,0x03,0x80, // 'Y'
	0xFF,0xFF,0xFF,0xFF,0xFC,0x01,0xE0,0x1E,0x01,0xE0,0x0F,0x00,0xF0,0x0F,0x00,0x70,0x07,0x80,0x78,0x07,0x80,0x3C,0x03,0xFF,0xFF,0xFF,0xFF,0xF8, // 'Z'
	0xFF,0xFF,0xEF,0x7B,0xDE,0xF7,0xBD,0xEF,0x7B,0xDE,0xF7,0xBD,0xEF,0x7F,0xFF, // '['
	0xF0,0x0E,0x01,0xC0,0x3C,0x03,0x80,0x78,0x07,0x00,0xE0,0x1E,0x01,0xC0,0x3C,0x03,0x80,0x70,0x0F,0x00,0xE0,0x1E,0x01,0xC0,0x3C, // '\'
	0xFF,0xFE,0x73,0x9C,0xE7,0x39,0xCE,0x73,0x9C,0xE7,0x39,0xCE,0x73,0xFF,0xFF, // ']'
	0x0C,0x07,0x81,0xE0,0xFC,0x33,0x1C,0xE7,0x3B,0x87, // '^'
	0xFF,0xFF,0xFF,0xFF,0x80, // '_'
	0xF1,0xC3,0x8F, // '`'
	0x3F,0x0F,0xF3,0xFF,0x00,0xE0,0x1E,0x3F,0xDF,0xFF,0xFF,0xF1,0xFC,0x3F,0xFF,0xBF,0xF3,0xDE, // 'a'
	0xE0,0x1C,0x03,0x80,0x70,0x0E,0x01,0xDE,0x3F,0xE7,0xFE,0xF1,0xFC,0x3F,0x83,0xF0,0x7E,0x0F,0xC3,0xFC,0x7F,0xFE,0xFF,0xDD,0xE0, // 'b'
	0x1F,0x07,0xF9,0xFF,0xF8,0xFF,0x0F,0xC0,0x38,0x07,0x00,0xF0,0xFE,0x3D,0xFF,0x9F,0xE1,0xF0, // 'c'
	0x00,0xE0,0x1C,0x03,0x80,0x70,0x0E,0x3D,0xCF,0xFB,0xFF,0xF1,0xFE,0x1F,0x83,0xF0,0x7E,0x0F,0xE1,0xFC,0x7B,0xFF,0x3F,0xE3,0xDC, // 'd'
	0x1F,0x07,0xF9,0xFF,0x78,0xFE,0x0F,0xFF,0xFF,0xFF,0xFF,0xE0,0x1E,0x09,0xFF,0x9F,0xF1,0xF8, // 'e'
	0x0F,0x3F,0x3F,0x78,0x78,0xFE,0xFE,0xFE,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78, // 'f'
	0x1E,0xF3,0xFF,0x7F,0xFF,0x0F,0xF0,0xFE,0x0F,0xE0,0xFE,0x0F,0xF0,0xFF,0x0F,0x7F,0xF3,0xFF,0x1E,0xF0,0x0E,0x21,0xE7,0xFE,0x7F,0xC1,0xF0, // 'g'
	0xE0,0x1C,0x03,0x80,0x70,0x0E,0x01,0xCF,0x3F,0xF7,0xFF,0xF1,0xFC,0x1F,0x83,0xF0,0x7E,0x0F,0xC1,0xF8,0x3F,0x07,0xE0,0xFC,0x1C, // 'h'
	0x6F,0xF6,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0, // 'i'
	0x18,0xF3,0xC6,0x00,0x03,0xCF,0x3C,0xF3,0xCF,0x3C,0xF3,0xCF,0x3C,0xF3,0xCF,0x3F,0xEF,0xBC, // 'j'
	0xF0,0x0F,0x00,0xF0,0x0F,0x00,0xF0,0x0F,0x1F,0xF3,0xCF,0x3C,0xF7,0x8F,0xF0,0xFE,0x0F,0xF0,0xFF,0x0F,0x78,0xF3,0xCF,0x1C,0xF1,0xEF,0x0F, // 'k'
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // 'l'
	0xF7,0x8F,0x9F,0xFB,0xFB,0xFF,0xFF,0x78,0xF8,0xEF,0x0E,0x1F,0xE1,0xC3,0xFC,0x38,0x7F,0x87,0x0F,0xF0,0xE1,0xFE,0x1C,0x3F,0xC3,0x87,0xF8,0x70,0xFF,0x0E,0x1E, // 'm'
	0xE7,0x9F,0xFB,0xFF,0xF8,0xFE,0x0F,0xC1,0xF8,0x3F,0x07,0xE0,0xFC,0x1F,0x83,0xF0,0x7E,0x0E, // 'n'
	0x1F,0x83,0xFC,0x7F,0xEF,0x0E,0xF0,0xFE,0x07,0xE0,0x7E,0x07,0xF0,0xFF,0x0E,0x7F,0xE3,0xFC,0x1F,0x80, // 'o'
	0xEF,0x1F,0xF3,0xFF,0x70,0xFE,0x1F,0xC1,0xF8,0x3F,0x0F,0xE1,0xFC,0x3F,0xFF,0x7F,0xCE,0xF1,0xC0,0x38,0x07,0x00,0xE0,0x1C,0x00, // 'p'
	0x1E,0xE7,0xFD,0xFF,0xF8,0xFF,0x0F,0xC1,0xF8,0x3F,0x07,0xF0,0xFE,0x3D,0xFF,0x9F,0xF1,0xEE,0x01,0xC0,0x38,0x07,0x00,0xE0,0x1C, // 'q'
	0xF7,0xFF,0xFF,0xF8,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0, // 'r'
	0x1F,0x87,0xF9,0xFF,0xB8,0x77,0x00,0xFE,0x0F,0xF0,0x3F,0x00,0xFE,0x1D,0xFF,0x9F,0xE1,0xF8, // 's'
	0x38,0x38,0x38,0xFE,0xFE,0xFE,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x3F,0x3F,0x1F, // 't'
	0xE0,0xFC,0x1F,0x83,0xF0,0x7E,0x0F,0xC1,0xF8,0x3F,0x07,0xE0,0xFE,0x3F,0xFF,0xBF,0xF3,0xCE, // 'u'
	0xF0,0xF7,0x0E,0x70,0xE7,0x9E,0x39,0xC3,0x9C,0x39,0xC1,0xF8,0x1F,0x81,0xF8,0x0F,0x00,0xF0,0x0F,0x00, // 'v'
	0xE1,0x87,0xE3,0xC7,0xE3,0xC7,0xE3,0xCF,0x77,0xCE,0x77,0xEE,0x76,0xEE,0x76,0x6E,0x3E,0x7C,0x3E,0x7C,0x3C,0x3C,0x3C,0x3C,0x1C,0x38, // 'w'
	0xF0,0xF7,0x9E,0x39,0xC3,0xFC,0x1F,0x80,0xF8,0x0F,0x01,0xF8,0x1F,0x83,0xFC,0x39,0xE7,0x8E,0xF0,0xF0, // 'x'
	0xF0,0xF7,0x0E,0x70,0xE7,0x9E,0x39,0xC3,0x9C,0x3F,0xC1,0xF8,0x1F,0x81,0xF8,0x0F,0x00,0xF0,0x0F,0x00,0xE0,0x0E,0x07,0xE0,0x7C,0x07,0x80, // 'y'
	0xFF,0xFF,0xFF,0xFC,0x1E,0x07,0x03,0xC1,0xE0,0xF0,0x38,0x1E,0x0F,0xFF,0xFF,0xFF,0xC0, // 'z'
	0x04,0x38,0xF9,0xC3,0x87,0x0E,0x1C,0x38,0xE3,0xC7,0x0F,0x0E,0x0E,0x1C,0x38,0x70,0xE1,0xC3,0xC3,0xC1,0x00, // '{'
	0xFF,0xFF,0xFF,0xFF,0xFF, // '|'
	0x40,0xE3,0xE1,0xC3,0x87,0x0E,0x1C,0x38,0x38,0x78,0x71,0xE3,0x8E,0x1C,0x38,0x70,0xE1,0xC7,0x9E,0x10,0x00 // '}'
};
const GFXglyph Roboto_Bold_24Glyphs[] PROGMEM = {
// bitmapOffset, width, height, xAdvance, xOffset, yOffset
	  {     0,   1,   1,   7,    0,    0 }, // ' '
	  {     1,   3,  17,   8,    2,  -17 }, // '!'
	  {     8,   6,   6,   9,    1,  -18 }, // '"'
	  {    13,  13,  17,  15,    1,  -17 }, // '#'
	  {    41,  12,  22,  15,    1,  -20 }, // '$'
	  {    74,  16,  17,  19,    1,  -17 }, // '%'
	  {   108,  15,  17,  17,    1,  -17 }, // '&'
	  {   140,   2,   6,   5,    1,  -18 }, // '''
	  {   142,   7,  24,   9,    1,  -19 }, // '('
	  {   163,   7,  24,   9,    0,  -19 }, // ')'
	  {   184,  11,  10,  12,    0,  -17 }, // '*'
	  {   198,  11,  13,  14,    1,  -15 }, // '+'
	  {   216,   5,   7,   7,    0,   -3 }, // ','
	  {   221,   7,   3,  10,    1,   -9 }, // '-'
	  {   224,   3,   4,   8,    2,   -4 }, // '.'
	  {   226,   9,  18,  10,    0,  -17 }, // '/'
	  {   247,  12,  17,  15,    1,  -17 }, // '0'
	  {   273,   7,  17,  15,    2,  -17 }, // '1'
	  {   288,  12,  17,  15,    1,  -17 }, // '2'
	  {   314,  12,  17,  15,    1,  -17 }, // '3'
	  {   340,  12,  17,  15,    1,  -17 }, // '4'
	  {   366,  12,  17,  15,    1,  -17 }, // '5'
	  {   392,  12,  17,  15,    1,  -17 }, // '6'
	  {   418,  12,  17,  15,    1,  -17 }, // '7'
	  {   444,  12,  17,  15,    1,  -17 }, // '8'
	  {   470,  12,  17,  15,    1,  -17 }, // '9'
	  {   496,   3,  14,   8,    2,  -14 }, // ':'
	  {   502,   5,  18,   7,    0,  -14 }, // ';'
	  {   514,  10,  11,  13,    1,  -13 }, // '<'
	  {   528,  10,   8,  15,    2,  -11 }, // '='
	  {   538,  11,  11,  13,    1,  -13 }, // '>'
	  {   554,  10,  17,  13,    1,  -17 }, // '?'
	  {   576,  19,  22,  22,    1,  -17 }, // '@'
	  {   629,  16,  17,  17,    0,  -17 }, // 'A'
	  {   663,  13,  17,  16,    1,  -17 }, // 'B'
	  {   691,  14,  17,  17,    1,  -17 }, // 'C'
	  {   721,  13,  17,  17,    2,  -17 }, // 'D'
	  {   749,  11,  17,  15,    2,  -17 }, // 'E'
	  {   773,  11,  17,  14,    2,  -17 }, // 'F'
	  {   797,  14,  17,  17,    1,  -17 }, // 'G'
	  {   827,  13,  17,  18,    2,  -17 }, // 'H'
	  {   855,   3,  17,   8,    2,  -17 }, // 'I'
	  {   862,  12,  17,  14,    0,  -17 }, // 'J'
	  {   888,  14,  17,  16,    1,  -17 }, // 'K'
	  {   918,  11,  17,  14,    2,  -17 }, // 'L'
	  {   942,  17,  17,  22,    2,  -17 }, // 'M'
	  {   979,  13,  17,  18,    2,  -17 }, // 'N'
	  {  1007,  15,  17,  18,    1,  -17 }, // 'O'
	  {  1039,  13,  17,  16,    1,  -17 }, // 'P'
	  {  1067,  15,  20,  18,    1,  -17 }, // 'Q'
	  {  1105,  14,  17,  16,    1,  -17 }, // 'R'
	  {  1135,  13,  17,  16,    1,  -17 }, // 'S'
	  {  1163,  14,  17,  16,    0,  -17 }, // 'T'
	  {  1193,  14,  17,  17,    1,  -17 }, // 'U'
	  {  1223,  16,  17,  17,    0,  -17 }, // 'V'
	  {  1257,  21,  17,  22,    0,  -17 }, // 'W'
	  {  1302,  15,  17,  16,    0,  -17 }, // 'X'
	  {  1334,  15,  17,  16,    0,  -17 }, // 'Y'
	  {  1366,  13,  17,  16,    1,  -17 }, // 'Z'
	  {  1394,   5,  24,   8,    1,  -20 }, // '['
	  {  1409,  11,  18,  11,    0,  -17 }, // '\'
	  {  1434,   5,  24,   8,    0,  -20 }, // ']'
	  {  1449,  10,   8,  11,    0,  -17 }, // '^'
	  {  1459,  11,   3,  12,    0,    0 }, // '_'
	  {  1464,   6,   4,   9,    1,  -18 }, // '`'
	  {  1467,  11,  13,  14,    1,  -13 }, // 'a'
	  {  1485,  11,  18,  15,    2,  -18 }, // 'b'
	  {  1510,  11,  13,  14,    1,  -13 }, // 'c'
	  {  1528,  11,  18,  15,    1,  -18 }, // 'd'
	  {  1553,  11,  13,  14,    1,  -13 }, // 'e'
	  {  1571,   8,  18,  10,    1,  -18 }, // 'f'
	  {  1589,  12,  18,  15,    1,  -13 }, // 'g'
	  {  1616,  11,  18,  14,    1,  -18 }, // 'h'
	  {  1641,   4,  19,   7,    1,  -19 }, // 'i'
	  {  1651,   6,  24,   7,   -1,  -19 }, // 'j'
	  {  1669,  12,  18,  14,    1,  -18 }, // 'k'
	  {  1696,   4,  18,   7,    1,  -18 }, // 'l'
	  {  1705,  19,  13,  22,    1,  -13 }, // 'm'
	  {  1736,  11,  13,  14,    1,  -13 }, // 'n'
	  {  1754,  12,  13,  15,    1,  -13 }, // 'o'
	  {  1774,  11,  18,  15,    2,  -13 }, // 'p'
	  {  1799,  11,  18,  15,    1,  -13 }, // 'q'
	  {  1824,   8,  13,  10,    1,  -13 }, // 'r'
	  {  1837,  11,  13,  13,    0,  -13 }, // 's'
	  {  1855,   8,  16,   9,    0,  -16 }, // 't'
	  {  1871,  11,  13,  14,    1,  -13 }, // 'u'
	  {  1889,  12,  13,  13,    0,  -13 }, // 'v'
	  {  1909,  16,  13,  19,    1,  -13 }, // 'w'
	  {  1935,  12,  13,  13,    0,  -13 }, // 'x'
	  {  1955,  12,  18,  13,    0,  -13 }, // 'y'
	  {  1982,  10,  13,  13,    1,  -13 }, // 'z'
	  {  1999,   7,  23,   9,    1,  -19 }, // '{'
	  {  2020,   2,  20,   7,    2,  -17 }, // '|'
	  {  2025,   7,  23,   9,    0,  -19 } // '}'
};
const GFXfont Roboto_Bold_24 PROGMEM = {
(uint8_t  *)Roboto_Bold_24Bitmaps,(GFXglyph *)Roboto_Bold_24Glyphs,0x20, 0x7E, 29};

// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const uint8_t Roboto_24Bitmaps[] PROGMEM = {

	// Bitmap Data:
	0x00, // ' '
	0xFF,0xFF,0xFF,0x03,0xC0, // '!'
	0x99,0x99,0x99, // '"'
	0x06,0x30,0x31,0x81,0x88,0x08,0x47,0xFF,0xBF,0xFC,0x31,0x81,0x88,0x08,0x40,0x46,0x3F,0xFF,0xFF,0xF1,0x8C,0x0C,0x40,0x46,0x02,0x30,0x31,0x80, // '#'
	0x06,0x00,0xC0,0x18,0x0F,0x83,0xFC,0xE1,0x98,0x3B,0x03,0x60,0x0E,0x00,0xF0,0x0F,0xC0,0x3C,0x01,0xC0,0x1E,0x03,0xE0,0x6E,0x1C,0xFF,0x0F,0xC0,0x60,0x0C,0x00, // '$'
	0x3C,0x00,0x66,0x00,0xC6,0x10,0xC2,0x38,0xC2,0x20,0xC6,0x60,0x66,0x40,0x3C,0xC0,0x01,0x80,0x01,0x3C,0x03,0x66,0x06,0x42,0x04,0x43,0x0C,0x43,0x18,0x42,0x18,0x66,0x00,0x3C, // '%'
	0x0F,0x00,0xFE,0x03,0x1C,0x0C,0x30,0x30,0xC0,0xC6,0x03,0xF0,0x07,0x80,0x1E,0x01,0xDC,0x66,0x31,0xB0,0x6E,0xC0,0xF3,0x81,0xC7,0x0F,0x1F,0xFE,0x1F,0x1C, // '&'
	0xFF,0xF0, // '''
	0x08,0x71,0x8C,0x61,0x86,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0x0E,0x18,0x60,0xC1,0x87,0x08, // '('
	0x41,0xC0,0xC1,0x81,0x83,0x03,0x06,0x0C,0x18,0x38,0x70,0xE1,0xC3,0x86,0x0C,0x18,0x30,0xC1,0x86,0x0C,0x30,0xC0, // ')'
	0x0C,0x03,0x00,0xC1,0xB7,0xFF,0xC3,0x01,0xE0,0xCC,0x33,0x88,0x40, // '*'
	0x06,0x00,0x60,0x06,0x00,0x60,0x06,0x0F,0xFF,0xFF,0xF0,0x60,0x06,0x00,0x60,0x06,0x00,0x60, // '+'
	0x77,0x76,0x6C, // ','
	0xFF,0xF0, // '-'
	0xF0, // '.'
	0x01,0x80,0xC0,0xC0,0x60,0x20,0x30,0x18,0x18,0x0C,0x04,0x06,0x03,0x03,0x01,0x80,0x80,0xC0,0x60,0x60,0x00, // '/'
	0x1F,0x07,0xF9,0xC7,0x30,0x76,0x07,0xC0,0xF8,0x1F,0x03,0xE0,0x7C,0x0F,0x81,0xF0,0x36,0x06,0xC1,0xDC,0x71,0xFE,0x1F,0x00, // '0'
	0x06,0x7F,0xFC,0x70,0xE1,0xC3,0x87,0x0E,0x1C,0x38,0x70,0xE1,0xC3,0x87,0x0E, // '1'
	0x1F,0x03,0xFC,0x71,0xCE,0x0E,0xC0,0x60,0x06,0x00,0xC0,0x0C,0x01,0x80,0x30,0x06,0x00,0xC0,0x18,0x03,0x00,0x70,0x0F,0xFF,0xFF,0xF0, // '2'
	0x1F,0x07,0xF9,0xC7,0x70,0x7C,0x0E,0x01,0x80,0x70,0x7C,0x0F,0x80,0x38,0x03,0x80,0x3C,0x07,0xC1,0xD8,0x33,0xFE,0x1F,0x00, // '3'
	0x01,0xC0,0x3C,0x03,0xC0,0x7C,0x0D,0xC0,0xDC,0x19,0xC3,0x1C,0x31,0xC6,0x1C,0xC1,0xCF,0xFF,0xFF,0xF0,0x1C,0x01,0xC0,0x1C,0x01,0xC0, // '4'
	0x7F,0xCF,0xF9,0x80,0x30,0x06,0x00,0xC0,0x1F,0xC3,0xFC,0xE1,0xC0,0x18,0x03,0x00,0x7C,0x0D,0x81,0xB8,0x73,0xFC,0x1F,0x00, // '5'
	0x07,0x07,0xC3,0x81,0xC0,0xE0,0x30,0x0D,0xF3,0xFE,0xE1,0xF0,0x3C,0x0F,0x03,0xC0,0xF0,0x36,0x1D,0xFE,0x1E,0x00, // '6'
	0xFF,0xFF,0xFC,0x01,0x80,0x60,0x0C,0x03,0x80,0x60,0x0C,0x03,0x00,0x60,0x18,0x03,0x00,0xC0,0x18,0x07,0x00,0xC0,0x38,0x00, // '7'
	0x1F,0x07,0xF9,0xC7,0x30,0x76,0x06,0xC1,0xDC,0x31,0xFC,0x3F,0x8E,0x19,0x81,0xF0,0x3C,0x07,0xC0,0xDC,0x39,0xFE,0x1F,0x00, // '8'
	0x1F,0x07,0xF1,0xC7,0x70,0x6C,0x0F,0x80,0xF0,0x1F,0x07,0x71,0xEF,0xFC,0x79,0x80,0x60,0x0C,0x03,0x80,0xE0,0xF8,0x1C,0x00, // '9'
	0xF0,0x00,0x03,0xC0, // ':'
	0x33,0x00,0x00,0x00,0x00,0x07,0x77,0x66,0xC0, // ';'
	0x00,0x81,0xC3,0xE7,0xCF,0x86,0x03,0xC0,0x7C,0x0F,0x81,0xC0,0x20, // '<'
	0xFF,0xFF,0xF0,0x00,0x00,0x00,0x3F,0xFF,0xFC, // '='
	0x80,0x38,0x0F,0x80,0xF8,0x07,0x80,0x70,0x78,0xF8,0xF8,0x38,0x08,0x00, // '>'
	0x3E,0x3F,0xB8,0xF8,0x30,0x18,0x0C,0x06,0x06,0x07,0x06,0x07,0x03,0x01,0x80,0x00,0x00,0x30,0x1C,0x00, // '?'
	0x01,0xFC,0x00,0x7F,0xF0,0x0F,0x07,0x81,0xC0,0x1C,0x30,0x00,0xC3,0x07,0x86,0x60,0xFC,0x66,0x18,0xC2,0x43,0x0C,0x24,0x30,0xC2,0xC3,0x0C,0x2C,0x60,0x82,0xC6,0x08,0x2C,0x61,0x86,0x43,0x3C,0x66,0x3E,0xFC,0x61,0xC7,0x83,0x00,0x00,0x38,0x00,0x01,0xE0,0xC0,0x0F,0xFC,0x00,0x3F,0x00, // '@'
	0x03,0x00,0x0F,0x00,0x1E,0x00,0x3C,0x00,0xCC,0x01,0x98,0x03,0x30,0x0C,0x30,0x18,0x60,0x70,0xE0,0xC0,0xC1,0xFF,0x87,0xFF,0x8C,0x03,0x38,0x07,0x60,0x06,0xC0,0x0E, // 'A'
	0xFF,0x8F,0xFC,0xC0,0xEC,0x06,0xC0,0x6C,0x06,0xC0,0xCF,0xF8,0xFF,0xCC,0x0E,0xC0,0x6C,0x07,0xC0,0x7C,0x06,0xC0,0xEF,0xFC,0xFF,0x80, // 'B'
	0x07,0xC0,0x7F,0xC3,0x87,0x1C,0x0E,0x60,0x19,0x80,0x6E,0x00,0x78,0x00,0xE0,0x03,0x80,0x0E,0x00,0x18,0x07,0x60,0x19,0xC0,0x63,0x87,0x07,0xFC,0x0F,0xC0, // 'C'
	0xFF,0x0F,0xF8,0xC1,0xEC,0x06,0xC0,0x7C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x7C,0x06,0xC1,0xEF,0xFC,0xFF,0x00, // 'D'
	0xFF,0xFF,0xFF,0x00,0x60,0x0C,0x01,0x80,0x30,0x07,0xFE,0xFF,0xD8,0x03,0x00,0x60,0x0C,0x01,0x80,0x30,0x07,0xFF,0xFF,0xE0, // 'E'
	0xFF,0xFF,0xFF,0x00,0x60,0x0C,0x01,0x80,0x30,0x06,0x00,0xFF,0x9F,0xF3,0x00,0x60,0x0C,0x01,0x80,0x30,0x06,0x00,0xC0,0x00, // 'F'
	0x0F,0xC0,0x7F,0xC3,0x83,0x9C,0x06,0x60,0x19,0x80,0x1E,0x00,0x38,0x00,0xE0,0x03,0x87,0xF6,0x1F,0xD8,0x07,0x60,0x1D,0xC0,0x73,0x81,0xC7,0xFE,0x07,0xE0, // 'G'
	0xC0,0x1E,0x00,0xF0,0x07,0x80,0x3C,0x01,0xE0,0x0F,0x00,0x7F,0xFF,0xFF,0xFE,0x00,0xF0,0x07,0x80,0x3C,0x01,0xE0,0x0F,0x00,0x78,0x03,0xC0,0x18, // 'H'
	0xFF,0xFF,0xFF,0xFF,0xC0, // 'I'
	0x00,0xC0,0x30,0x0C,0x03,0x00,0xC0,0x30,0x0C,0x03,0x00,0xC0,0x30,0x0C,0x03,0xC0,0xF0,0x3E,0x1D,0xFE,0x3F,0x00, // 'J'
	0xC0,0x7E,0x07,0x30,0x31,0x83,0x0C,0x38,0x63,0x83,0x38,0x1B,0x80,0xFE,0x07,0xB0,0x39,0xC1,0x87,0x0C,0x1C,0x60,0x63,0x03,0x98,0x0E,0xC0,0x38, // 'K'
	0xC0,0x30,0x0C,0x03,0x00,0xC0,0x30,0x0C,0x03,0x00,0xC0,0x30,0x0C,0x03,0x00,0xC0,0x30,0x0C,0x03,0xFF,0xFF,0xC0, // 'L'
	0xE0,0x03,0xF0,0x03,0xFC,0x01,0xFE,0x00,0xFD,0x80,0xDE,0xC0,0x6F,0x70,0x77,0x98,0x33,0xCC,0x19,0xE3,0x18,0xF1,0x8C,0x78,0xEE,0x3C,0x36,0x1E,0x1B,0x0F,0x07,0x07,0x83,0x83,0xC1,0xC1,0x80, // 'M'
	0xE0,0x1F,0x00,0xFC,0x07,0xE0,0x3D,0x81,0xEE,0x0F,0x30,0x78,0xC3,0xC7,0x1E,0x18,0xF0,0xE7,0x83,0xBC,0x0D,0xE0,0x7F,0x01,0xF8,0x07,0xC0,0x38, // 'N'
	0x07,0xC0,0x7F,0xC3,0x87,0x9C,0x06,0x60,0x1D,0x80,0x3E,0x00,0xF8,0x03,0xE0,0x0F,0x80,0x3E,0x00,0xD8,0x03,0x60,0x1D,0xC0,0x63,0x87,0x87,0xFC,0x07,0xC0, // 'O'
	0xFF,0x8F,0xFE,0xC0,0xEC,0x07,0xC0,0x3C,0x03,0xC0,0x3C,0x07,0xC0,0xEF,0xFE,0xFF,0x8C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x00, // 'P'
	0x0F,0x81,0xFF,0x1C,0x1C,0xC0,0x6C,0x03,0xE0,0x0F,0x00,0x78,0x03,0xC0,0x1E,0x00,0xF0,0x07,0x80,0x3C,0x03,0xB0,0x19,0xC1,0xC7,0xFC,0x0F,0xE0,0x03,0x80,0x0E,0x00,0x20, // 'Q'
	0xFF,0x8F,0xFC,0xC0,0xEC,0x07,0xC0,0x7C,0x07,0xC0,0x7C,0x0E,0xFF,0xCF,0xF8,0xC1,0x8C,0x1C,0xC0,0xCC,0x0E,0xC0,0x6C,0x07,0xC0,0x30, // 'R'
	0x1F,0x83,0xFE,0x70,0xEE,0x07,0xE0,0x3E,0x00,0x70,0x03,0xE0,0x1F,0x80,0x3E,0x00,0x70,0x03,0xC0,0x3E,0x03,0x70,0x73,0xFE,0x1F,0x80, // 'S'
	0xFF,0xFF,0xFF,0xC1,0x80,0x0C,0x00,0x60,0x03,0x00,0x18,0x00,0xC0,0x06,0x00,0x30,0x01,0x80,0x0C,0x00,0x60,0x03,0x00,0x18,0x00,0xC0,0x06,0x00, // 'T'
	0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3E,0x07,0x70,0xE3,0xFC,0x1F,0x80, // 'U'
	0xE0,0x0E,0xC0,0x19,0xC0,0x71,0x80,0xE3,0x01,0x87,0x07,0x06,0x0C,0x0C,0x18,0x1C,0x70,0x18,0xC0,0x31,0x80,0x77,0x00,0x6C,0x00,0xD8,0x00,0xE0,0x01,0xC0,0x03,0x80, // 'V'
	0xC0,0x60,0x7C,0x0E,0x06,0xE0,0xE0,0x66,0x0F,0x06,0x60,0xF0,0xE6,0x1B,0x0C,0x61,0x98,0xC3,0x19,0x8C,0x33,0x18,0xC3,0x31,0x98,0x33,0x0D,0x81,0xB0,0xD8,0x1E,0x0D,0x81,0xE0,0x58,0x1E,0x07,0x01,0xC0,0x70,0x0C,0x07,0x00, // 'W'
	0xE0,0x3B,0x01,0x9C,0x1C,0x71,0xC1,0x8C,0x0E,0xE0,0x3E,0x00,0xF0,0x07,0x00,0x3C,0x03,0x60,0x3B,0x81,0x8E,0x1C,0x31,0xC1,0xCC,0x06,0xE0,0x38, // 'X'
	0xE0,0x1D,0xC0,0x63,0x03,0x8E,0x0C,0x18,0x70,0x71,0x80,0xCE,0x03,0xB0,0x07,0xC0,0x1E,0x00,0x30,0x00,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xC0,0x03,0x00, // 'Y'
	0xFF,0xFF,0xFF,0x00,0x70,0x0E,0x00,0xC0,0x18,0x03,0x80,0x70,0x06,0x00,0xE0,0x1C,0x01,0x80,0x30,0x07,0x00,0xE0,0x0F,0xFF,0xFF,0xF0, // 'Z'
	0xFF,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xFF, // '['
	0xE0,0x18,0x07,0x00,0xC0,0x30,0x06,0x01,0x80,0x70,0x0C,0x03,0x00,0x60,0x18,0x06,0x00,0xC0,0x30,0x06,0x01,0x80,0x70, // '\'
	0xFF,0xCE,0x73,0x9C,0xE7,0x39,0xCE,0x73,0x9C,0xE7,0x39,0xCE,0x73,0x9F,0xFF, // ']'
	0x18,0x18,0x3C,0x3C,0x66,0x66,0xC3,0xC3, // '^'
	0xFF,0xFF,0xFC, // '_'
	0xE3,0x8E, // '`'
	0x1F,0x0F,0xF1,0x87,0x70,0x60,0x0C,0x3F,0x9F,0xF3,0x86,0xE0,0xD8,0x1B,0x87,0x3F,0xE3,0xEE, // 'a'
	0xE0,0x1C,0x03,0x80,0x70,0x0E,0x01,0xDE,0x3F,0xF7,0x8E,0xE0,0xFC,0x0F,0x81,0xF0,0x3E,0x07,0xC0,0xF8,0x3F,0x8E,0xDF,0xD9,0xE0, // 'b'
	0x0F,0x07,0xF9,0xC3,0x30,0x3E,0x07,0xC0,0x30,0x07,0x00,0xE0,0x0C,0x0D,0xC3,0x1F,0xE1,0xF0, // 'c'
	0x00,0x60,0x0C,0x01,0x80,0x30,0x06,0x3E,0xCF,0xFB,0x87,0x60,0x7C,0x0F,0x81,0xF0,0x3E,0x06,0xC0,0xD8,0x1B,0x87,0x3F,0xE3,0xEC, // 'd'
	0x0F,0x07,0xF9,0xC3,0x30,0x7E,0x07,0xFF,0xFF,0xFE,0x00,0xE0,0x0C,0x01,0xC3,0x9F,0xE0,0xF8, // 'e'
	0x1E,0x7C,0xC1,0x83,0x1F,0xBF,0x18,0x30,0x60,0xC1,0x83,0x06,0x0C,0x18,0x30,0x60, // 'f'
	0x1E,0x6F,0xED,0xC7,0xF0,0x7C,0x0F,0x81,0xF0,0x3E,0x07,0xC0,0xFC,0x1D,0xC7,0xBF,0xF1,0xEE,0x01,0xD0,0x33,0x0E,0x7F,0x83,0xE0, // 'g'
	0xC0,0x60,0x30,0x18,0x0C,0x06,0xFB,0xFF,0xC7,0xC1,0xE0,0xF0,0x78,0x3C,0x1E,0x0F,0x07,0x83,0xC1,0xE0,0xC0, // 'h'
	0xF0,0xFF,0xFF,0xFF,0xC0, // 'i'
	0x18,0xC0,0x01,0x8C,0x63,0x18,0xC6,0x31,0x8C,0x63,0x18,0xC6,0x3F,0xF8, // 'j'
	0xC0,0x30,0x0C,0x03,0x00,0xC0,0x30,0xFC,0x33,0x18,0xCC,0x37,0x0F,0x83,0xE0,0xEC,0x33,0x8C,0x73,0x0C,0xC1,0xB0,0x70, // 'k'
	0xFF,0xFF,0xFF,0xFF,0xF0, // 'l'
	0xDF,0x1E,0x7F,0xDF,0xF8,0xF8,0xF8,0x38,0x3C,0x1C,0x1E,0x0E,0x0F,0x07,0x07,0x83,0x83,0xC1,0xC1,0xE0,0xE0,0xF0,0x70,0x78,0x38,0x3C,0x1C,0x18, // 'm'
	0xDF,0x7F,0xF8,0xF8,0x3C,0x1E,0x0F,0x07,0x83,0xC1,0xE0,0xF0,0x78,0x3C,0x18, // 'n'
	0x0F,0x03,0xFC,0x70,0xE6,0x06,0xE0,0x7C,0x03,0xC0,0x3C,0x03,0xE0,0x76,0x06,0x70,0xE3,0xFC,0x0F,0x00, // 'o'
	0xCF,0x1B,0xFB,0xC7,0x70,0x7E,0x07,0xC0,0xF8,0x1F,0x03,0xE0,0x7C,0x1F,0xC7,0x7F,0xEE,0xF1,0xC0,0x38,0x07,0x00,0xE0,0x1C,0x00, // 'p'
	0x1F,0x67,0xFD,0xC3,0xB0,0x3E,0x07,0xC0,0xF0,0x1E,0x03,0xE0,0x6C,0x0D,0xC3,0x9F,0xF1,0xF6,0x00,0xC0,0x18,0x03,0x00,0x60,0x0C, // 'q'
	0xDF,0xFE,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC0, // 'r'
	0x1E,0x1F,0xE6,0x1F,0x83,0xE0,0x1F,0x03,0xF8,0x0F,0x00,0xF0,0x3E,0x1D,0xFE,0x1F,0x00, // 's'
	0x38,0x70,0xE7,0xFF,0xE7,0x0E,0x1C,0x38,0x70,0xE1,0xC3,0x83,0x07,0x87, // 't'
	0xE0,0xF8,0x3E,0x0F,0x83,0xE0,0xF8,0x3E,0x0F,0x83,0xE0,0xD8,0x36,0x1D,0xFF,0x3E,0xC0, // 'u'
	0xC0,0xF0,0x3E,0x1D,0x86,0x61,0x8C,0xC3,0x30,0xCC,0x1E,0x07,0x81,0xE0,0x30,0x0C,0x00, // 'v'
	0xE0,0xC1,0xB0,0x60,0xD8,0x78,0x6E,0x3C,0x63,0x1E,0x31,0x99,0x98,0xCC,0xCC,0x36,0x6C,0x1A,0x16,0x0F,0x0F,0x07,0x87,0x01,0x81,0x80,0xC0,0xC0, // 'w'
	0x60,0xE6,0x18,0xE7,0x0C,0xC0,0xF0,0x1E,0x01,0x80,0x78,0x1F,0x03,0x30,0xE7,0x38,0x6E,0x06, // 'x'
	0xE0,0xEC,0x19,0x83,0x38,0xE3,0x18,0x63,0x0E,0x60,0xD8,0x1B,0x03,0xE0,0x38,0x07,0x00,0x60,0x18,0x03,0x00,0xC0,0x78,0x0E,0x00, // 'y'
	0xFF,0xFF,0xF0,0x18,0x0C,0x07,0x03,0x80,0xC0,0x60,0x38,0x1C,0x06,0x03,0xFF,0xFF,0xC0, // 'z'
	0x06,0x1C,0x61,0xC3,0x06,0x0C,0x18,0x30,0x61,0xC7,0x0E,0x0E,0x0C,0x18,0x30,0x60,0xC1,0xC1,0x83,0x81,0x80, // '{'
	0xFF,0xFF,0xFF,0xFF,0xFF, // '|'
	0xC1,0xC0,0xC1,0x81,0x83,0x06,0x0C,0x18,0x30,0x70,0x70,0xE3,0x86,0x0C,0x18,0x30,0x61,0xC3,0x0C,0x30,0x00 // '}'
};
const GFXglyph Roboto_24Glyphs[] PROGMEM = {
// bitmapOffset, width, height, xAdvance, xOffset, yOffset
	  {     0,   1,   1,   7,    0,    0 }, // ' '
	  {     1,   2,  17,   7,    2,  -17 }, // '!'
	  {     6,   4,   6,   9,    2,  -18 }, // '"'
	  {     9,  13,  17,  16,    1,  -17 }, // '#'
	  {    37,  11,  22,  14,    1,  -20 }, // '$'
	  {    68,  16,  17,  19,    1,  -17 }, // '%'
	  {   102,  14,  17,  16,    1,  -17 }, // '&'
	  {   132,   2,   6,   5,    1,  -18 }, // '''
	  {   134,   6,  25,   9,    2,  -19 }, // '('
	  {   153,   7,  25,   9,    0,  -19 }, // ')'
	  {   175,  10,  10,  11,    0,  -17 }, // '*'
	  {   188,  12,  12,  15,    1,  -14 }, // '+'
	  {   206,   4,   6,   6,    0,   -2 }, // ','
	  {   209,   6,   2,   8,    0,   -8 }, // '-'
	  {   211,   2,   2,   7,    2,   -2 }, // '.'
	  {   212,   9,  18,  11,    0,  -17 }, // '/'
	  {   233,  11,  17,  14,    1,  -17 }, // '0'
	  {   257,   7,  17,  14,    2,  -17 }, // '1'
	  {   272,  12,  17,  14,    1,  -17 }, // '2'
	  {   298,  11,  17,  14,    1,  -17 }, // '3'
	  {   322,  12,  17,  14,    1,  -17 }, // '4'
	  {   348,  11,  17,  14,    2,  -17 }, // '5'
	  {   372,  10,  17,  14,    2,  -17 }, // '6'
	  {   394,  11,  17,  14,    1,  -17 }, // '7'
	  {   418,  11,  17,  14,    1,  -17 }, // '8'
	  {   442,  11,  17,  14,    1,  -17 }, // '9'
	  {   466,   2,  13,   7,    2,  -13 }, // ':'
	  {   470,   4,  17,   6,    0,  -13 }, // ';'
	  {   479,   9,  11,  13,    1,  -13 }, // '<'
	  {   492,  10,   7,  14,    2,  -12 }, // '='
	  {   501,  10,  11,  14,    2,  -13 }, // '>'
	  {   515,   9,  17,  12,    1,  -17 }, // '?'
	  {   535,  20,  22,  23,    1,  -17 }, // '@'
	  {   590,  15,  17,  17,    1,  -17 }, // 'A'
	  {   622,  12,  17,  16,    2,  -17 }, // 'B'
	  {   648,  14,  17,  17,    1,  -17 }, // 'C'
	  {   678,  12,  17,  17,    2,  -17 }, // 'D'
	  {   704,  11,  17,  15,    2,  -17 }, // 'E'
	  {   728,  11,  17,  14,    2,  -17 }, // 'F'
	  {   752,  14,  17,  17,    1,  -17 }, // 'G'
	  {   782,  13,  17,  18,    2,  -17 }, // 'H'
	  {   810,   2,  17,   8,    2,  -17 }, // 'I'
	  {   815,  10,  17,  14,    1,  -17 }, // 'J'
	  {   837,  13,  17,  16,    2,  -17 }, // 'K'
	  {   865,  10,  17,  14,    2,  -17 }, // 'L'
	  {   887,  17,  17,  22,    2,  -17 }, // 'M'
	  {   924,  13,  17,  18,    2,  -17 }, // 'N'
	  {   952,  14,  17,  18,    1,  -17 }, // 'O'
	  {   982,  12,  17,  16,    2,  -17 }, // 'P'
	  {  1008,  13,  20,  18,    2,  -17 }, // 'Q'
	  {  1041,  12,  17,  16,    2,  -17 }, // 'R'
	  {  1067,  12,  17,  15,    1,  -17 }, // 'S'
	  {  1093,  13,  17,  15,    1,  -17 }, // 'T'
	  {  1121,  12,  17,  17,    2,  -17 }, // 'U'
	  {  1147,  15,  17,  16,    0,  -17 }, // 'V'
	  {  1179,  20,  17,  22,    1,  -17 }, // 'W'
	  {  1222,  13,  17,  16,    1,  -17 }, // 'X'
	  {  1250,  14,  17,  15,    0,  -17 }, // 'Y'
	  {  1280,  12,  17,  15,    1,  -17 }, // 'Z'
	  {  1306,   4,  24,   7,    2,  -20 }, // '['
	  {  1318,  10,  18,  11,    0,  -17 }, // '\'
	  {  1341,   5,  24,   7,    0,  -20 }, // ']'
	  {  1356,   8,   8,  11,    1,  -17 }, // '^'
	  {  1364,  11,   2,  12,    0,    0 }, // '_'
	  {  1367,   5,   3,   8,    1,  -18 }, // '`'
	  {  1369,  11,  13,  14,    1,  -13 }, // 'a'
	  {  1387,  11,  18,  14,    1,  -18 }, // 'b'
	  {  1412,  11,  13,  14,    1,  -13 }, // 'c'
	  {  1430,  11,  18,  15,    1,  -18 }, // 'd'
	  {  1455,  11,  13,  14,    1,  -13 }, // 'e'
	  {  1473,   7,  18,   9,    1,  -18 }, // 'f'
	  {  1489,  11,  18,  14,    1,  -13 }, // 'g'
	  {  1514,   9,  18,  14,    2,  -18 }, // 'h'
	  {  1535,   2,  17,   7,    2,  -17 }, // 'i'
	  {  1540,   5,  22,   7,   -1,  -17 }, // 'j'
	  {  1554,  10,  18,  13,    2,  -18 }, // 'k'
	  {  1577,   2,  18,   7,    2,  -18 }, // 'l'
	  {  1582,  17,  13,  22,    2,  -13 }, // 'm'
	  {  1610,   9,  13,  14,    2,  -13 }, // 'n'
	  {  1625,  12,  13,  15,    1,  -13 }, // 'o'
	  {  1645,  11,  18,  14,    1,  -13 }, // 'p'
	  {  1670,  11,  18,  15,    1,  -13 }, // 'q'
	  {  1695,   6,  13,   9,    2,  -13 }, // 'r'
	  {  1705,  10,  13,  13,    1,  -13 }, // 's'
	  {  1722,   7,  16,   9,    0,  -16 }, // 't'
	  {  1736,  10,  13,  14,    1,  -13 }, // 'u'
	  {  1753,  10,  13,  13,    1,  -13 }, // 'v'
	  {  1770,  17,  13,  19,    0,  -13 }, // 'w'
	  {  1798,  11,  13,  13,    0,  -13 }, // 'x'
	  {  1816,  11,  18,  12,    0,  -13 }, // 'y'
	  {  1841,  10,  13,  13,    1,  -13 }, // 'z'
	  {  1858,   7,  23,   9,    1,  -19 }, // '{'
	  {  1879,   2,  20,   7,    2,  -17 }, // '|'
	  {  1884,   7,  23,   9,    0,  -19 } // '}'
};
const GFXfont Roboto_24 PROGMEM = {
(uint8_t  *)Roboto_24Bitmaps,(GFXglyph *)Roboto_24Glyphs,0x20, 0x7E, 29};