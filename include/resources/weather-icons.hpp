#include <Arduino.h>
#include <gfxfont.h>

const uint8_t Meteocons_Regular_35Bitmaps[] PROGMEM = {

	// Bitmap Data:
	0x00, // ' '
	0x00,0x00,0x0E,0x00,0x00,0x00,0x07,0xFC,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x7F,0xFF,0xC0,0x00,0x0F,0xFF,0xFF,0x00,0x01,0xFF,0xFF,0xF8,0x00,0x3F,0xFF,0xFF,0xC3,0xFF,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFF,0xC0,0x07,0xFF,0xFF,0xFC,0x00,0x7F,0xFF,0xFF,0xEF,0xC7,0xFF,0xFF,0xFC,0xFE,0x7F,0xFF,0xFF,0xC0,0x03,0xFF,0xFF,0xF8,0x00,0x1F,0xFF,0xFF,0x80,0x00,0xFF,0xFF,0xF0,0xFF,0xE1,0xFF,0xF0,0x0F,0xFE,0x01,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x01,0xE0,0x40,0x00,0x00,0x1E,0x06,0x00,0x00,0x00,0xC0,0x60,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x60,0x00, // '!'
	0x00,0x01,0xF0,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x1F,0xFF,0x00,0x00,0x03,0xFF,0xF8,0x00,0x00,0x7F,0xFF,0xC0,0x00,0xFF,0xFF,0xFF,0xE0,0x1F,0xFF,0xFF,0xFF,0x03,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xCF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xE7,0xFF,0xFF,0xFF,0xFC,0x7F,0xFF,0xFF,0xFF,0xC3,0xFF,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xFF,0x00,0x7D,0xFF,0xF7,0xC0,0x00,0x0F,0xFE,0x00,0x00,0x00,0x3F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x0F,0xFC,0x00,0x00,0x00,0xFF,0xC0,0x00,0x00,0x03,0x10,0x00,0x00,0x00,0x31,0x00,0x00,0x00,0x0F,0xFC,0x00,0x00,0x00,0xFF,0xC0,0x00,0x00,0x0C,0xCC,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0xC0,0x00,0x00, // '"'
	0x00,0x01,0xF0,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x1F,0xFF,0x00,0x00,0x03,0xFF,0xF8,0x00,0x00,0x7F,0xFF,0xC0,0x00,0xFF,0xFF,0xFF,0xE0,0x1F,0xFF,0xFF,0xFF,0x03,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xCF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xE7,0xFF,0xFF,0xFF,0xFC,0x7F,0xFF,0xFF,0xFF,0xC3,0xFF,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xFF,0x00,0x7D,0xFF,0xF7,0xC0,0x00,0x0F,0xFE,0x00,0x00,0x00,0x3F,0x80,0x00,0x16,0x00,0x00,0x00,0x01,0xE0,0x0C,0x00,0x00,0x1B,0x80,0xC0,0x09,0x03,0xB0,0x0C,0x00,0xF0,0x2F,0x0F,0xFC,0x3E,0x00,0xD0,0xFF,0xC1,0xB8,0x08,0x03,0x10,0x1F,0x80,0x00,0x31,0x01,0x60,0x00,0x0F,0xFC,0x02,0x00,0x00,0xFF,0xC0,0x00,0x00,0x0C,0xCC,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0xC0,0x00,0x00, // '#'
	0x00,0x01,0xF0,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x1F,0xFF,0x00,0x00,0x03,0xFF,0xF8,0x00,0x00,0x7F,0xFF,0xC0,0x00,0xFF,0xFF,0xFF,0xE0,0x1F,0xFF,0xFF,0xFF,0x03,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xCF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xE7,0xFF,0xFF,0xFF,0xFC,0x7F,0xFF,0xFF,0xFF,0xC3,0xFF,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xFF,0x00,0x7D,0xFF,0xF7,0xC0,0x00,0x0F,0xFE,0x00,0x00,0x00,0x3F,0x80,0x00,0x07,0x00,0x00,0x1C,0x00,0xF8,0x00,0x03,0xC0,0x0F,0x80,0x40,0x3E,0x00,0x70,0x0E,0x01,0xC0,0x00,0x01,0xF0,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x3C,0x00,0x00,0x78,0x03,0xC0,0x00,0x07,0x80,0x3C,0x00,0x00,0x78,0x03,0xC0,0x00, // '$'
	0x00,0x00,0x1F,0x80,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0xFF,0xFF,0xF0,0x00,0x1F,0xFF,0xFF,0x80,0x03,0xFF,0xFF,0xFC,0x00,0x7F,0xFF,0xFF,0xE0,0x07,0xFF,0xFF,0xFE,0x00,0x7F,0xFF,0xFF,0xE0,0x07,0xFF,0xFF,0xFE,0x07,0xFF,0xFF,0xFF,0xE1,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0xFF,0xC7,0xFF,0xFF,0xFF,0xFC,0x7F,0xFF,0xFF,0xFF,0xCF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFF,0xE7,0xFF,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFF,0x81,0xFF,0xFF,0xFF,0xF0,0x0F,0xFF,0xFF,0xFE,0x00,0x01,0xFF,0xF0,0x00,0x00,0x07,0xFC,0x00,0x00,0x00,0x04,0x00,0x00, // '%'
	0x00,0x00,0x1F,0x80,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x7F,0xFF,0xE0,0x00,0x1F,0xFF,0xFF,0x80,0x03,0xFF,0xFF,0xFC,0x00,0x7F,0xFF,0xFF,0xC0,0x07,0xFF,0xFF,0xFE,0x00,0x7F,0xFF,0xFF,0xE0,0x07,0xFF,0xFF,0xFE,0x03,0xFF,0xFF,0xFF,0xE0,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0xFF,0xC7,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xCF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xE7,0xFF,0xFF,0xFF,0xFC,0x7F,0xFF,0xFF,0xFF,0xC3,0xFF,0xFF,0xFF,0xF8,0x0F,0xFF,0xFF,0xFE,0x00,0x31,0xFF,0xF1,0x80,0x00,0x0F,0xFE,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x07,0xC0,0x00,0x00,0x00,0x3E,0x00,0x00,0x00,0x01,0xF0,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x03,0x80,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x04,0x00,0x00,0x00, // '&'
	0x18,0x0F,0x03,0xC0,0xF0,0x3C,0x0F,0x03,0xC0,0xF0,0x3C,0x0F,0x03,0xC0,0xF0,0x3C,0x0F,0x03,0xC0,0xF0,0x3C,0x0F,0x03,0xC0,0xF0,0x3C,0x0F,0x03,0xC1,0xF8,0xFF,0x3F,0xEF,0xFB,0xFE,0xFF,0x9F,0xC3,0xE0, // '''
	0x00,0x03,0xF8,0x00,0x00,0x01,0xFF,0xF0,0x00,0x00,0x7F,0xFF,0xC0,0x00,0x1F,0xFF,0xFF,0x00,0x03,0xFF,0xFF,0xF8,0x00,0x7F,0x80,0x3F,0xC0,0x0F,0xE0,0x00,0xFE,0x01,0xF8,0x00,0x03,0xF0,0x1F,0x00,0x00,0x1F,0x03,0xE0,0x00,0x00,0xF8,0x7E,0x00,0x00,0x0F,0x87,0xC0,0x00,0x10,0x7C,0x78,0x00,0x06,0x03,0xCF,0x80,0x01,0xE0,0x3E,0xF8,0x00,0x7C,0x03,0xEF,0x80,0x1F,0xC0,0x3E,0xF0,0x01,0xF8,0x01,0xEF,0x00,0x3F,0x80,0x1E,0xF0,0x03,0xF0,0x01,0xEF,0x00,0x7F,0x00,0x3E,0xF8,0x07,0xC0,0x03,0xEF,0x80,0xF0,0x00,0x3E,0x78,0x0C,0x00,0x03,0xC7,0xC1,0x00,0x00,0x7C,0x7C,0x00,0x00,0x07,0xC3,0xE0,0x00,0x00,0xF8,0x3F,0x00,0x00,0x1F,0x81,0xF8,0x00,0x03,0xF0,0x0F,0xC0,0x00,0x7E,0x00,0x7F,0x00,0x1F,0xC0,0x03,0xFE,0x0F,0xF8,0x00,0x1F,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xE0,0x00,0x03,0xFF,0xF8,0x00,0x00,0x0F,0xFE,0x00,0x00, // '('
	0xC1,0x83,0x06,0x0E,0x18,0x30,0xF0,0xE1,0x82,0x0F,0x0F,0x18,0x60,0xF0,0xF9,0x86,0x1F,0x8F,0x98,0x41,0x98,0xDD,0x8C,0x19,0x8C,0xF8,0xC3,0x9C,0xCF,0x88,0x3F,0xCC,0x79,0x83,0xFC,0xC3,0x98,0x70,0xEC,0x39,0x06,0x06,0x00,0x30,0x00,0x00, // ')'
	0x20,0x00,0xF8,0x7C,0x98,0xFE,0x99,0xC4,0xF9,0x80,0x21,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0xC4,0x00,0xFE,0x00,0x7C, // '*'
	0xF1,0xFE,0x99,0xFE,0x99,0x80,0xF9,0x80,0x61,0x80,0x01,0xFC,0x01,0xFC,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80, // '+'
	0x00, // ','
	0x00, // '-'
	0x00, // '.'
	0x00, // '/'
	0x00,0x00,0x1F,0x80,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0xE0,0x70,0x00,0x00,0x7C,0x03,0xE0,0x00,0x1F,0x80,0x1F,0x80,0x03,0x80,0x00,0x1C,0x00,0x33,0xF8,0x00,0xC0,0x06,0xFF,0xE0,0x06,0x00,0x7E,0x0F,0x00,0x60,0x07,0x80,0x38,0x06,0x00,0x70,0x01,0xC0,0x60,0x7E,0x00,0x0F,0xC6,0x1F,0xC0,0x00,0x7F,0xC3,0xC0,0x00,0x00,0x38,0x70,0x00,0x00,0x01,0xC6,0x00,0x00,0x00,0x0E,0xE0,0x00,0x00,0x00,0x6C,0x00,0x00,0x00,0x06,0xC0,0x00,0x00,0x00,0x6C,0x00,0x00,0x00,0x06,0xE0,0x00,0x00,0x00,0x66,0x00,0x00,0x00,0x0C,0x70,0x00,0x30,0x01,0xC3,0xC2,0x06,0x08,0x38,0x1F,0xF8,0xC1,0xFF,0x00,0x7E,0x3C,0x7F,0xC0,0x00,0x07,0xCE,0x00,0x00,0x00,0x3E,0x00,0x00,0x00,0x01,0xF0,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x01,0xC0,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x04,0x00,0x00,0x00, // '0'
	0x00,0x04,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x60,0x00,0x00,0x01,0x80,0x00,0x04,0x06,0x01,0x00,0x38,0x00,0x0E,0x00,0x70,0x00,0x70,0x00,0xC3,0xE1,0x80,0x00,0x3F,0xE0,0x00,0x01,0xFF,0xC0,0x00,0x0F,0xFF,0x80,0x00,0x3F,0xFE,0x00,0x01,0xFF,0xFC,0x00,0x07,0xFF,0xF0,0x0F,0x9F,0xFF,0xCF,0xBE,0x7F,0xFF,0x3E,0x01,0xFF,0xFC,0x00,0x07,0xFF,0xF0,0x00,0x0F,0xFF,0x80,0x00,0x1F,0xFC,0x00,0x00,0x3F,0xE0,0x00,0x08,0x7F,0x08,0x00,0x70,0x00,0x70,0x03,0x80,0x00,0xE0,0x0C,0x00,0x01,0x80,0x00,0x18,0x00,0x00,0x00,0x60,0x00,0x00,0x01,0x80,0x00,0x00,0x06,0x00,0x00, // '1'
	0x08,0x00,0x18,0x00,0x38,0x00,0x78,0x00,0x78,0x00,0xF8,0x00,0xFC,0x00,0xFC,0x00,0xFE,0x00,0xFF,0x80,0x7F,0xFE,0x7F,0xFC,0x3F,0xF8,0x1F,0xF0,0x07,0xC0, // '2'
	0x00,0x06,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x0C,0x04,0x01,0x00,0x00,0xE0,0x00,0x38,0x00,0x07,0x00,0x07,0x00,0x00,0x20,0xF8,0x60,0x00,0x00,0x3F,0xE0,0x00,0x00,0x07,0x07,0x00,0x00,0x00,0xE0,0x38,0x00,0x00,0x0C,0x01,0xC0,0x00,0x01,0x80,0x0C,0x00,0x0F,0x18,0x3F,0xCF,0x00,0xF1,0x8F,0xFC,0xF0,0x00,0x19,0xFF,0xF0,0x00,0x01,0xFF,0xFF,0x80,0x00,0x0F,0xFF,0xFC,0x00,0x07,0xFF,0xFF,0xFE,0x01,0xFF,0xFF,0xFF,0xF0,0x3F,0xFF,0xFF,0xFF,0x83,0xFF,0xFF,0xFF,0xFC,0x7F,0xFF,0xFF,0xFF,0xE7,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xE7,0xFF,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFF,0xE3,0xFF,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFF,0x80,0xFF,0xFF,0xFF,0xF0,0x07,0xFF,0xFF,0xFC,0x00,0x00,0xFF,0xF0,0x00,0x00,0x03,0xFC,0x00,0x00, // '3'
	0x00,0x00,0x0E,0x00,0x00,0x00,0x01,0xE0,0x00,0x00,0x00,0x3E,0x00,0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x6E,0x00,0x00,0x00,0x0E,0x60,0x00,0x00,0x00,0xC6,0x00,0x00,0x00,0x0C,0x70,0x00,0x00,0x00,0xC3,0x80,0x00,0x00,0x0C,0x1C,0x00,0x00,0x01,0xE0,0xFF,0x80,0x00,0xFF,0xC3,0xF8,0x00,0x1F,0xFF,0x07,0x00,0x03,0xFF,0xF8,0xE0,0x00,0x7F,0xFF,0xFE,0x00,0xFF,0xFF,0xFF,0xE0,0x1F,0xFF,0xFF,0xFF,0x03,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xC7,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xE7,0xFF,0xFF,0xFF,0xFC,0x7F,0xFF,0xFF,0xFF,0xC3,0xFF,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xFF,0x00,0x7F,0xFF,0xFF,0xC0,0x00,0x0F,0xFE,0x00,0x00,0x00,0x3F,0x80,0x00, // '4'
	0x00,0x03,0xF8,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x3F,0xFF,0x80,0x00,0x07,0xFF,0xFC,0x00,0x07,0xFF,0xFF,0xFC,0x01,0xFF,0xFF,0xFF,0xF0,0x3F,0xFF,0xFF,0xFF,0x87,0xFF,0xFF,0xFF,0xFC,0x7F,0xFF,0xFF,0xFF,0xCF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xE7,0xFF,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFF,0x81,0xFF,0xFF,0xFF,0xF0,0x0F,0xFF,0xFF,0xFE,0x00,0x01,0xFF,0xF0,0x00,0x00,0x07,0xFC,0x00,0x00,0x00,0x0E,0x00,0x00, // '5'
	0x00,0x01,0xF0,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x1F,0xFF,0x00,0x00,0x03,0xFF,0xF8,0x00,0x00,0x7F,0xFF,0xC0,0x00,0xFF,0xFF,0xFF,0xE0,0x1F,0xFF,0xFF,0xFF,0x03,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xCF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xE7,0xFF,0xFF,0xFF,0xFC,0x7F,0xFF,0xFF,0xFF,0xC3,0xFF,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xFF,0x00,0x7D,0xFF,0xF7,0xC0,0x00,0x0F,0xFE,0x00,0x00,0x00,0x3F,0x80,0x00,0x00,0x01,0xC0,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x07,0xC0,0x00,0x00,0x00,0x3E,0x00,0x00,0x00,0x01,0xF0,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x01,0xC0,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x04,0x00,0x00,0x00, // '6'
	0x00,0x00,0xE0,0x00,0x00,0x00,0x7F,0xC0,0x00,0x00,0x1F,0xFF,0x00,0x00,0x03,0xFF,0xF8,0x00,0x00,0x7F,0xFF,0xC0,0x00,0xFF,0xFF,0xFF,0xE0,0x1F,0xFF,0xFF,0xFF,0x03,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xC7,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xE7,0xFF,0xFF,0xFF,0xFC,0x7F,0xFF,0xFF,0xFF,0xC3,0xFF,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xFF,0x00,0x7F,0xFF,0xFF,0xC0,0x00,0x0F,0xFE,0x00,0x00,0x00,0x7F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x01,0xE0,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x00,0xC0,0x00,0x00, // '7'
	0x00,0x01,0xF0,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x1F,0xFF,0x00,0x00,0x03,0xFF,0xF8,0x00,0x00,0x7F,0xFF,0xC0,0x00,0xFF,0xFF,0xFF,0xE0,0x1F,0xFF,0xFF,0xFF,0x03,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xCF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xE7,0xFF,0xFF,0xFF,0xFC,0x7F,0xFF,0xFF,0xFF,0xC3,0xFF,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xFF,0x00,0x7D,0xFF,0xF7,0xC0,0x00,0x0F,0xFE,0x00,0x00,0x00,0x3F,0x80,0x00,0x00,0x80,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x01,0xE0,0x00,0x40,0x00,0x1E,0x00,0x06,0x00,0x00,0xC0,0x00,0x60,0x00,0x00,0x06,0x0F,0x00,0x00,0x00,0x60,0xF0,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0xF0,0x60,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x60,0x00,0x00, // '8'
	0x00,0x00,0x1F,0xC0,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x7F,0xFF,0xF0,0x00,0x0F,0xFF,0xFF,0x80,0x01,0xFF,0xFF,0xFC,0x00,0x3F,0xFF,0xFF,0xC3,0xFB,0xFF,0xFF,0xFE,0x3F,0xBF,0xFF,0xFF,0xE0,0x07,0xFF,0xFF,0xFE,0x00,0x3F,0xFF,0xFF,0xEF,0xC3,0xFF,0xFF,0xFE,0xFE,0x3F,0xFF,0xFF,0xC0,0x01,0xFF,0xFF,0xFC,0x00,0x0F,0xFF,0xFF,0x8F,0xFE,0x7F,0xFF,0xE0,0xFF,0xE0,0x3F,0xC0,0x00, // '9'
	0x00, // ':'
	0x00, // ';'
	0x00, // '<'
	0x00, // '='
	0x00, // '>'
	0x00, // '?'
	0x00, // '@'
	0x00,0x60,0x00,0x01,0x80,0x00,0x06,0x00,0x00,0x18,0x00,0xE0,0x00,0x3B,0xC0,0x01,0xE3,0x07,0x07,0x00,0xFF,0x80,0x07,0xFF,0x00,0x38,0x0E,0x00,0xC0,0x18,0x07,0x00,0x70,0x18,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xF0,0x1F,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0x00,0x1F,0xFC,0x00, // 'A'
	0x00,0x04,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x60,0x00,0x00,0x01,0x80,0x00,0x04,0x06,0x01,0x00,0x38,0x00,0x0E,0x00,0x70,0x00,0x70,0x00,0xC3,0xE1,0x80,0x00,0x3F,0xE0,0x00,0x01,0xE3,0xC0,0x00,0x0E,0x03,0x80,0x00,0x30,0x06,0x00,0x01,0x80,0x0C,0x00,0x06,0x00,0x30,0x0F,0x98,0x00,0xCF,0xBE,0x60,0x03,0x3E,0x01,0x80,0x0C,0x00,0x07,0x00,0x70,0x00,0x0E,0x03,0x80,0x00,0x1C,0x1C,0x00,0x00,0x3F,0xE0,0x00,0x08,0x7F,0x08,0x00,0x70,0x00,0x70,0x03,0x80,0x00,0xE0,0x0C,0x00,0x01,0x80,0x00,0x18,0x00,0x00,0x00,0x60,0x00,0x00,0x01,0x80,0x00,0x00,0x06,0x00,0x00, // 'B'
	0x06,0x00,0x07,0x80,0x03,0xE0,0x01,0xF8,0x00,0x66,0x00,0x39,0x80,0x0C,0x60,0x03,0x1C,0x00,0xC3,0x80,0x30,0x70,0x0C,0x0F,0xFB,0x81,0xFE,0x60,0x0F,0x8C,0x01,0xC3,0xC1,0xE0,0x7F,0xF0,0x07,0xF0,0x00, // 'C'
	0x00,0x02,0x00,0x00,0x00,0x30,0x00,0x00,0x03,0x00,0x00,0x00,0x30,0x00,0x04,0x03,0x00,0x00,0xE0,0x00,0x00,0x07,0x00,0x00,0x00,0x30,0xFF,0x80,0x00,0x3F,0xFE,0x00,0x07,0xFF,0xF0,0x00,0xEF,0xFF,0x80,0x0C,0xFF,0xFC,0x01,0xCF,0xFF,0xC0,0x19,0xFF,0xFC,0xF9,0x9F,0xFF,0xEF,0x99,0xFF,0xFE,0x01,0x9F,0xFF,0xC0,0x1C,0xFF,0xFC,0x00,0xEF,0xFF,0xC0,0x07,0x7F,0xF8,0x00,0x3F,0xFF,0x00,0x21,0xFF,0xC0,0x07,0x00,0x00,0x00,0xE0,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x03,0x00,0x00,0x00,0x30,0x00,0x00,0x03,0x00,0x00, // 'D'
	0x00,0x07,0xE0,0x00,0x00,0x07,0xFF,0x00,0x00,0x03,0xC1,0xE0,0x00,0x01,0xC0,0x1C,0x00,0xFF,0xFF,0x83,0x80,0x3F,0xFF,0xF0,0x60,0x00,0x18,0x00,0x1C,0x00,0x06,0x00,0x03,0x00,0x01,0x80,0x00,0xC0,0x0F,0xFF,0xFF,0xFF,0xE3,0xFF,0xFF,0xFF,0xF8,0x06,0x00,0x03,0x00,0x01,0x80,0x00,0xC0,0x3F,0xFF,0xFF,0xFC,0x0F,0xFF,0xFF,0xFF,0x80,0x01,0xC0,0x1C,0x00,0x00,0x38,0x0E,0x00,0x00,0x07,0xFF,0x00,0x00,0x00,0xFF,0x80,0x00, // 'E'
	0x00,0x0F,0x80,0x00,0x00,0x3E,0x00,0x00,0x01,0xFC,0x00,0x00,0x07,0xF0,0x00,0xFF,0xFF,0x80,0x03,0xFF,0xFC,0x07,0x80,0x00,0x00,0x3F,0x00,0x00,0x00,0xFE,0x00,0x00,0x03,0xFB,0xFF,0xFF,0xFF,0xCF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xC0,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x7F,0x00,0x00,0x01,0xFC,0x00,0x00,0x07,0xE0,0x00,0x00,0x0F,0x80,0x00, // 'F'
	0x00,0x60,0x00,0x07,0x80,0x00,0x3C,0x00,0x01,0xE0,0x07,0x0F,0x0C,0x3F,0xFF,0xF3,0xFF,0xFF,0xCF,0xFF,0xFC,0x3F,0xFF,0xC0,0x7C,0x78,0x03,0xC1,0xC0,0x1E,0x0E,0x01,0xF8,0xF8,0x3F,0xFF,0xF1,0xFF,0xFF,0x9F,0xFF,0xFE,0x79,0xF9,0xE0,0x07,0x80,0x00,0x3C,0x00,0x01,0xE0,0x00,0x0F,0x00,0x00,0x30,0x00, // 'G'
	0x00,0x06,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x0C,0x04,0x01,0x00,0x00,0xE0,0x00,0x38,0x00,0x07,0x00,0x07,0x00,0x00,0x20,0xF8,0x60,0x00,0x00,0x3F,0xE0,0x00,0x00,0x07,0x07,0x00,0x00,0x00,0xE0,0x38,0x00,0x00,0x0C,0x01,0xC0,0x00,0x01,0x80,0x0C,0x00,0x0F,0x18,0x3F,0xCF,0x00,0xF1,0x8F,0xFC,0xF0,0x00,0x19,0xE0,0xF0,0x00,0x01,0xF8,0x03,0x80,0x00,0x0F,0x00,0x1C,0x00,0x07,0xE0,0x00,0xFC,0x00,0xFC,0x00,0x07,0xF0,0x38,0x00,0x00,0x03,0x83,0x00,0x00,0x00,0x1C,0x60,0x00,0x00,0x00,0xE6,0x00,0x00,0x00,0x0E,0xC0,0x00,0x00,0x00,0x6C,0x00,0x00,0x00,0x06,0xC0,0x00,0x00,0x00,0x66,0x00,0x00,0x00,0x0E,0x60,0x00,0x00,0x00,0xE3,0x00,0x00,0x00,0x1C,0x38,0x20,0x00,0x83,0x81,0xFF,0x00,0x1F,0xF0,0x07,0xFC,0x07,0xFC,0x00,0x00,0xFF,0xF0,0x00,0x00,0x03,0xFC,0x00,0x00, // 'H'
	0x00,0x00,0x04,0x00,0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0x3E,0x00,0x00,0x00,0x03,0xE0,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x0E,0x60,0x00,0x00,0x00,0xC6,0x00,0x00,0x00,0x0C,0x70,0x00,0x00,0x00,0xC3,0x00,0x00,0x00,0x0C,0x38,0x00,0x00,0x00,0xC1,0xF3,0x80,0x00,0x3F,0x8F,0xF8,0x00,0x0F,0xFE,0x3F,0x80,0x01,0xFF,0xF0,0x70,0x00,0x3C,0x07,0x8F,0x00,0x07,0x00,0x1F,0xE0,0x07,0xE0,0x00,0xFC,0x01,0xFC,0x00,0x07,0xF0,0x38,0x00,0x00,0x03,0x87,0x00,0x00,0x00,0x1C,0x60,0x00,0x00,0x00,0xCE,0x00,0x00,0x00,0x0E,0xC0,0x00,0x00,0x00,0x6C,0x00,0x00,0x00,0x06,0xC0,0x00,0x00,0x00,0x6E,0x00,0x00,0x00,0x0E,0x60,0x00,0x00,0x00,0xC7,0x00,0x00,0x00,0x1C,0x38,0x20,0x00,0x83,0x81,0xFF,0x00,0x1F,0xF0,0x07,0xFC,0x07,0xFC,0x00,0x00,0xFF,0xE0,0x00,0x00,0x03,0xF8,0x00,0x00, // 'I'
	0x00,0x02,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0xC0,0x00,0x0C,0x02,0x01,0x80,0x38,0x00,0x0E,0x00,0x70,0x00,0x70,0x00,0xC1,0xE1,0x80,0x00,0x1F,0xE0,0x00,0x01,0xFF,0xE0,0x00,0x0E,0x03,0xC0,0x00,0x30,0x03,0x00,0x01,0xC0,0x0E,0x00,0x06,0x00,0x18,0x0F,0x98,0x00,0x6F,0xBE,0x60,0x01,0xBE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xBF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xBF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xF8, // 'J'
	0x00,0x0C,0x00,0x00,0x00,0xF0,0x00,0x00,0x07,0xC0,0x00,0x00,0x3F,0x00,0x00,0x00,0xFC,0x00,0x00,0x07,0x30,0x00,0x00,0x18,0xC0,0x00,0x00,0x63,0x80,0x00,0x01,0x87,0x00,0x00,0x06,0x1E,0x00,0x00,0x18,0x3F,0xF0,0x00,0x70,0x7F,0xC0,0x00,0xC0,0x7E,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xF8,0x00,0x0F,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFB,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFB,0xFF,0xFF,0xFF,0xE0, // 'K'
	0x00,0x07,0xFC,0x00,0x00,0x01,0xFF,0xF0,0x00,0x00,0x3C,0x07,0x80,0x00,0x07,0x00,0x1C,0x00,0x07,0xE0,0x00,0xFC,0x01,0xFC,0x00,0x07,0xF0,0x38,0x00,0x00,0x03,0x87,0x00,0x00,0x00,0x1C,0x60,0x00,0x00,0x00,0xCC,0x00,0x00,0x00,0x06,0xC0,0x00,0x00,0x00,0x6C,0x00,0x00,0x00,0x06,0xC0,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFE, // 'L'
	0xFF,0xFF,0xFB,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFB,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xEF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xEF,0xFF,0xFF,0x80, // 'M'
	0x00,0x07,0xFC,0x00,0x00,0x01,0xFF,0xF0,0x00,0x00,0x3C,0x07,0x80,0x00,0x07,0x00,0x1C,0x00,0x07,0xE0,0x00,0xFC,0x01,0xFC,0x00,0x07,0xF0,0x38,0x00,0x00,0x03,0x87,0x00,0x00,0x00,0x1C,0x60,0x00,0x00,0x00,0xCE,0x00,0x00,0x00,0x0E,0xC0,0x00,0x00,0x00,0x6C,0x00,0x00,0x00,0x06,0xC0,0x00,0x00,0x00,0x6E,0x00,0x00,0x00,0x0E,0x60,0x00,0x00,0x00,0xC7,0x00,0x00,0x00,0x1C,0x38,0x20,0x00,0x83,0x81,0xFF,0x00,0x1F,0xF0,0x07,0xFC,0x07,0xFC,0x00,0x00,0xFF,0xE0,0x00,0x00,0x03,0xF8,0x00,0x00, // 'N'
	0x00,0x07,0xFC,0x00,0x00,0x01,0xFF,0xF0,0x00,0x00,0x3C,0x07,0x80,0x00,0x07,0x00,0x1C,0x00,0x07,0xE0,0x00,0xFC,0x01,0xFC,0x00,0x07,0xF0,0x38,0x00,0x00,0x03,0x87,0x00,0x00,0x00,0x1C,0x60,0x00,0x00,0x00,0xCE,0x00,0x00,0x00,0x0E,0xC0,0x00,0x00,0x00,0x6C,0x00,0x00,0x00,0x06,0xC0,0x00,0x00,0x00,0x6E,0x00,0x00,0x00,0x0E,0x60,0x00,0x00,0x00,0xC7,0x00,0x00,0x00,0x1C,0x38,0x20,0x00,0x83,0x81,0xFF,0x00,0x3F,0xF0,0x07,0xFC,0x0F,0xFC,0x00,0x00,0xFF,0xE0,0x00,0x00,0x03,0xF8,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x00,0x7C,0x00,0x00,0x00,0x03,0xE0,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x01,0xE0,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x03,0x80,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x40,0x00,0x00, // 'O'
	0x00,0x07,0xFC,0x00,0x00,0x01,0xFF,0xF0,0x00,0x00,0x3C,0x07,0x80,0x00,0x07,0x00,0x1C,0x00,0x07,0xE0,0x00,0xFC,0x01,0xFC,0x00,0x07,0xF0,0x38,0x00,0x00,0x03,0x87,0x00,0x00,0x00,0x1C,0x60,0x00,0x00,0x00,0xCE,0x00,0x00,0x00,0x0E,0xC0,0x00,0x00,0x00,0x6C,0x00,0x00,0x00,0x06,0xC0,0x00,0x00,0x00,0x6E,0x00,0x00,0x00,0x0E,0x60,0x00,0x00,0x00,0xC7,0x00,0x00,0x00,0x1C,0x38,0x20,0x00,0x83,0x81,0xFF,0x83,0x3F,0xF0,0x07,0xFE,0x27,0xFC,0x00,0x00,0xC6,0x60,0x00,0x00,0x00,0xC8,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x00,0x7C,0x00,0x00,0x00,0x03,0xE0,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x01,0xE0,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x03,0x80,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x40,0x00,0x00, // 'P'
	0x00,0x07,0xFC,0x00,0x00,0x01,0xFF,0xF0,0x00,0x00,0x3C,0x07,0x80,0x00,0x07,0x00,0x1C,0x00,0x07,0xE0,0x00,0xFC,0x01,0xFC,0x00,0x07,0xF0,0x38,0x00,0x00,0x03,0x87,0x00,0x00,0x00,0x1C,0x60,0x00,0x00,0x00,0xCE,0x00,0x00,0x00,0x0E,0xC0,0x00,0x00,0x00,0x6C,0x00,0x00,0x00,0x06,0xC0,0x00,0x00,0x00,0x6E,0x00,0x00,0x00,0x0E,0x60,0x00,0x00,0x00,0xC7,0x00,0x00,0x00,0x1C,0x38,0x20,0x00,0x83,0x81,0xFF,0x00,0x1F,0xF0,0x07,0xFC,0x07,0xFC,0x00,0x00,0xFF,0xE0,0x00,0x00,0x03,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x01,0xE0,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x01,0xE0,0x00,0x00,0x00,0x0C,0x00,0x00, // 'Q'
	0x00,0x07,0xFC,0x00,0x00,0x01,0xFF,0xF0,0x00,0x00,0x3C,0x07,0x80,0x00,0x07,0x00,0x1C,0x00,0x07,0xE0,0x00,0xFC,0x01,0xFC,0x00,0x07,0xF0,0x38,0x00,0x00,0x03,0x87,0x00,0x00,0x00,0x1C,0x60,0x00,0x00,0x00,0xCE,0x00,0x00,0x00,0x0E,0xC0,0x00,0x00,0x00,0x6C,0x00,0x00,0x00,0x06,0xC0,0x00,0x00,0x00,0x6E,0x00,0x00,0x00,0x0E,0x60,0x00,0x00,0x00,0xC7,0x00,0x00,0x00,0x1C,0x38,0x20,0x00,0x83,0x81,0xFF,0x00,0x1F,0xF0,0x07,0xFC,0x07,0xFC,0x00,0x00,0xFF,0xE0,0x00,0x00,0x03,0xF8,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x01,0xE0,0x00,0x00,0x00,0x1E,0x00,0x04,0x00,0x01,0xE0,0x00,0x60,0x00,0x08,0x00,0x06,0x00,0x00,0x00,0x60,0xF0,0x00,0x00,0x06,0x0F,0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0x0F,0x06,0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x06,0x00,0x00, // 'R'
	0x00,0x00,0x07,0x00,0x00,0x00,0x03,0xFE,0x00,0x00,0x00,0x78,0xF0,0x00,0x00,0x3C,0x03,0xE0,0x00,0x0F,0x80,0x1F,0x80,0x01,0xC0,0x00,0x3C,0x00,0x38,0x00,0x00,0xC3,0xFB,0x00,0x00,0x0E,0x3F,0xB0,0x00,0x00,0x60,0x07,0x00,0x00,0x06,0x00,0x30,0x00,0x00,0x6F,0xC3,0x00,0x00,0x0E,0xFE,0x38,0x00,0x00,0xC0,0x01,0xC0,0x00,0x3C,0x00,0x0F,0xE0,0x7F,0x8F,0xFE,0x3F,0xFF,0xE0,0xFF,0xE0,0x3F,0xC0,0x00, // 'S'
	0x00,0x00,0x0F,0x00,0x00,0x00,0x07,0xFC,0x00,0x00,0x00,0xF8,0xE0,0x00,0x00,0x7C,0x03,0xC0,0x00,0x0F,0x80,0x1F,0x00,0x01,0xC0,0x00,0x38,0x00,0x38,0x00,0x01,0xC3,0xFF,0x00,0x00,0x0C,0x3F,0xF0,0x00,0x00,0x40,0x07,0x00,0x00,0x04,0x00,0x70,0x00,0x00,0x6F,0xC7,0x00,0x00,0x04,0xFE,0x70,0x00,0x00,0xC0,0x03,0x80,0x00,0x1C,0x00,0x1C,0x00,0x03,0x80,0x00,0xFE,0x07,0xF0,0xFF,0xE7,0xFF,0xFC,0x0F,0xFE,0x03,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x01,0xE0,0x40,0x00,0x00,0x1E,0x06,0x00,0x00,0x00,0xC0,0x60,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x60,0x00, // 'T'
	0x00,0x07,0xFC,0x00,0x00,0x01,0xFF,0xF0,0x00,0x00,0x3C,0x07,0x80,0x00,0x07,0x00,0x1C,0x00,0x07,0xE0,0x00,0xFC,0x01,0xFC,0x00,0x07,0xF0,0x38,0x00,0x00,0x03,0x87,0x00,0x00,0x00,0x1C,0x60,0x00,0x00,0x00,0xCE,0x00,0x00,0x00,0x0E,0xC0,0x00,0x00,0x00,0x6C,0x00,0x00,0x00,0x06,0xC0,0x00,0x00,0x00,0x6E,0x00,0x00,0x00,0x0E,0x60,0x00,0x00,0x00,0xC7,0x00,0x00,0x00,0x1C,0x38,0x20,0x00,0x83,0x81,0xFF,0x00,0x1F,0xF0,0x07,0xFC,0x07,0xFC,0x00,0x00,0xFF,0xE0,0x00,0x00,0x03,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0xFF,0xC0,0x00,0x00,0x0F,0xFC,0x00,0x00,0x00,0x31,0x00,0x00,0x00,0x03,0x10,0x00,0x00,0x00,0xFF,0xC0,0x00,0x00,0x0F,0xFC,0x00,0x00,0x00,0xCC,0xC0,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x0C,0x00,0x00, // 'U'
	0x00,0x07,0xFC,0x00,0x00,0x01,0xFF,0xF0,0x00,0x00,0x3C,0x07,0x80,0x00,0x07,0x00,0x1C,0x00,0x07,0xE0,0x00,0xFC,0x01,0xFC,0x00,0x07,0xF0,0x38,0x00,0x00,0x03,0x87,0x00,0x00,0x00,0x1C,0x60,0x00,0x00,0x00,0xCE,0x00,0x00,0x00,0x0E,0xC0,0x00,0x00,0x00,0x6C,0x00,0x00,0x00,0x06,0xC0,0x00,0x00,0x00,0x6E,0x00,0x00,0x00,0x0E,0x60,0x00,0x00,0x00,0xC7,0x00,0x00,0x00,0x1C,0x38,0x20,0xC0,0x83,0x81,0xFE,0x0C,0x0F,0xF0,0x07,0xCD,0xEC,0x7C,0x00,0x00,0xFF,0xC0,0x00,0x00,0x07,0xB8,0x00,0x00,0x00,0x31,0x00,0x00,0x00,0x07,0xB8,0x00,0x00,0x00,0xFF,0xC0,0x00,0x00,0x0F,0xFC,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x08,0x00,0x00, // 'V'
	0x00,0x07,0xFC,0x00,0x00,0x01,0xFF,0xF0,0x00,0x00,0x3C,0x07,0x80,0x00,0x07,0x00,0x1C,0x00,0x07,0xE0,0x00,0xFC,0x01,0xFC,0x00,0x07,0xF0,0x38,0x00,0x00,0x03,0x87,0x00,0x00,0x00,0x1C,0x60,0x00,0x00,0x00,0xCE,0x00,0x00,0x00,0x0E,0xC0,0x00,0x00,0x00,0x6C,0x00,0x00,0x00,0x06,0xC0,0x00,0x00,0x00,0x6E,0x00,0x00,0x00,0x0E,0x60,0x00,0x00,0x00,0xC7,0x00,0x00,0x00,0x1C,0x38,0x20,0x00,0x83,0x81,0xFF,0x00,0x1F,0xF0,0x07,0xFC,0x07,0xFC,0x00,0x00,0xFF,0xE0,0x00,0x04,0x03,0xF8,0x00,0x01,0x60,0x00,0x00,0x00,0x1F,0x00,0xC0,0x00,0x01,0xB8,0x0C,0x00,0x90,0x3B,0x00,0xC0,0x0F,0x00,0xF0,0xFF,0xC3,0xE0,0x0D,0x0F,0xFC,0x1B,0x80,0x80,0x31,0x01,0xF8,0x00,0x03,0x10,0x16,0x00,0x00,0xFF,0xC0,0x20,0x00,0x0F,0xFC,0x00,0x00,0x00,0xCC,0xC0,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x0C,0x00,0x00, // 'W'
	0x00,0x07,0xFC,0x00,0x00,0x01,0xFF,0xF0,0x00,0x00,0x3C,0x07,0x80,0x00,0x07,0x00,0x1C,0x00,0x07,0xE0,0x00,0xFC,0x01,0xFC,0x00,0x07,0xF0,0x38,0x00,0x00,0x03,0x87,0x00,0x00,0x00,0x1C,0x60,0x00,0x00,0x00,0xCE,0x00,0x00,0x00,0x0E,0xC0,0x00,0x00,0x00,0x6C,0x00,0x00,0x00,0x06,0xC0,0x00,0x00,0x00,0x6E,0x00,0x00,0x00,0x0E,0x60,0x00,0x00,0x00,0xC7,0x00,0x00,0x00,0x1C,0x38,0x20,0x00,0x83,0x81,0xFF,0x00,0x1F,0xF0,0x07,0xFC,0x07,0xFC,0x00,0x00,0xFF,0xE0,0x00,0x00,0x03,0xF8,0x00,0x00,0x70,0x00,0x01,0xC0,0x0F,0x80,0x00,0x3C,0x00,0xF8,0x04,0x03,0xE0,0x07,0x00,0xE0,0x1C,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x03,0xC0,0x00,0x07,0x80,0x3C,0x00,0x00,0x78,0x03,0xC0,0x00,0x07,0x80,0x3C,0x00, // 'X'
	0x00,0x00,0x1F,0x80,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0xE0,0x70,0x00,0x00,0xFC,0x03,0xE0,0x00,0x1F,0x80,0x1F,0x80,0x03,0xBF,0x80,0x1C,0x00,0x7F,0xFE,0x00,0xC0,0x07,0xE0,0xF0,0x06,0x00,0x78,0x03,0x80,0x60,0x07,0x00,0x1C,0x06,0x07,0xE0,0x00,0xFC,0x61,0xFC,0x00,0x07,0xFC,0x3C,0x00,0x00,0x03,0xC7,0x00,0x00,0x00,0x1C,0x60,0x00,0x00,0x00,0xCE,0x00,0x00,0x00,0x06,0xC0,0x00,0x00,0x00,0x6C,0x00,0x00,0x00,0x06,0xC0,0x00,0x00,0x00,0x6E,0x00,0x00,0x00,0x06,0x60,0x00,0x00,0x00,0xC7,0x00,0x00,0x00,0x1C,0x3C,0x20,0x00,0x83,0x81,0xFF,0x80,0x1F,0xF0,0x07,0xFC,0x07,0xFC,0x00,0x00,0xFF,0xE0,0x00,0x00,0x03,0xF8,0x00,0x00, // 'Y'
	0x00,0x00,0x1F,0x80,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0xE0,0x70,0x00,0x00,0xFC,0x03,0xE0,0x00,0x1F,0x80,0x1F,0x80,0x03,0x80,0x00,0x1C,0x00,0x73,0xF8,0x00,0xC0,0x06,0xFF,0xE0,0x06,0x00,0x7E,0x0F,0x00,0x60,0x07,0x80,0x38,0x06,0x00,0x70,0x01,0xC0,0x60,0x7E,0x00,0x0F,0xC6,0x1F,0xC0,0x00,0x7F,0xC3,0xC0,0x00,0x00,0x38,0x70,0x00,0x00,0x01,0xC6,0x00,0x00,0x00,0x0E,0xE0,0x00,0x00,0x00,0x6C,0x00,0x00,0x00,0x06,0xC0,0x00,0x00,0x00,0x6C,0x00,0x00,0x00,0x06,0xE0,0x00,0x00,0x00,0x66,0x00,0x00,0x00,0x0C,0x70,0x00,0x00,0x01,0xC3,0xC2,0x00,0x08,0x38,0x1F,0xF8,0x01,0xFF,0x00,0x7F,0xE0,0xFF,0xC0,0x00,0x0F,0xFE,0x00,0x00,0x00,0x3F,0x80,0x00,0x00,0x07,0xC0,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x01,0xE0,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x03,0x80,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x04,0x00,0x00,0x00, // 'Z'
	0x00, // '['
	0x00, // '\'
	0x00, // ']'
	0x00, // '^'
	0x00, // '_'
	0x00, // '`'
	0x00, // 'a'
	0x00, // 'b'
	0x00, // 'c'
	0x00, // 'd'
	0x00, // 'e'
	0x00, // 'f'
	0x00, // 'g'
	0x00, // 'h'
	0x00, // 'i'
	0x00, // 'j'
	0x00, // 'k'
	0x00, // 'l'
	0x00, // 'm'
	0x00, // 'n'
	0x00, // 'o'
	0x00, // 'p'
	0x00, // 'q'
	0x00, // 'r'
	0x00, // 's'
	0x00, // 't'
	0x00, // 'u'
	0x00, // 'v'
	0x00, // 'w'
	0x00, // 'x'
	0x00, // 'y'
	0x00, // 'z'
	0x00, // '{'
	0x00, // '|'
	0x00 // '}'
};

const GFXglyph Meteocons_Regular_35Glyphs[] PROGMEM = {
// bitmapOffset, width, height, xAdvance, xOffset, yOffset
	  {     0,   1,   1,  36,    0,    0 }, // ' '
	  {     1,  36,  31,  36,    0,  -31 }, // '!'
	  {   141,  36,  35,  36,    0,  -33 }, // '"'
	  {   299,  36,  35,  36,    0,  -33 }, // '#'
	  {   457,  36,  35,  36,    0,  -33 }, // '$'
	  {   615,  36,  28,  36,    0,  -29 }, // '%'
	  {   741,  36,  35,  36,    0,  -33 }, // '&'
	  {   899,  10,  31,  36,   13,  -31 }, // '''
	  {   938,  36,  35,  36,    0,  -33 }, // '('
	  {  1096,  28,  13,  36,    4,  -22 }, // ')'
	  {  1142,  16,  13,  36,   10,  -22 }, // '*'
	  {  1168,  16,  12,  36,   10,  -21 }, // '+'
	  {  1192,   1,   1,  36,    0,    0 }, // ','
	  {  1193,   1,   1,  36,    0,    0 }, // '-'
	  {  1194,   1,   1,  36,    0,    0 }, // '.'
	  {  1195,   1,   1,  36,    0,    0 }, // '/'
	  {  1196,  36,  35,  37,    0,  -33 }, // '0'
	  {  1354,  30,  29,  36,    3,  -30 }, // '1'
	  {  1463,  16,  15,  36,   10,  -23 }, // '2'
	  {  1493,  36,  35,  36,    0,  -33 }, // '3'
	  {  1651,  36,  32,  36,    0,  -30 }, // '4'
	  {  1795,  36,  22,  36,    0,  -26 }, // '5'
	  {  1894,  36,  33,  36,    0,  -33 }, // '6'
	  {  2043,  36,  31,  36,    0,  -31 }, // '7'
	  {  2183,  36,  35,  36,    0,  -33 }, // '8'
	  {  2341,  36,  17,  36,    0,  -24 }, // '9'
	  {  2418,   1,   1,  36,    0,    0 }, // ':'
	  {  2419,   1,   1,  36,    0,    0 }, // ';'
	  {  2420,   1,   1,  36,    0,    0 }, // '<'
	  {  2421,   1,   1,  36,    0,    0 }, // '='
	  {  2422,   1,   1,  36,    0,    0 }, // '>'
	  {  2423,   1,   1,  36,    0,    0 }, // '?'
	  {  2424,   1,   1,  36,    0,    0 }, // '@'
	  {  2425,  22,  22,  36,    7,  -26 }, // 'A'
	  {  2486,  30,  29,  36,    3,  -30 }, // 'B'
	  {  2595,  18,  17,  36,    9,  -24 }, // 'C'
	  {  2634,  28,  29,  36,    4,  -29 }, // 'D'
	  {  2736,  34,  19,  36,    2,  -26 }, // 'E'
	  {  2817,  30,  19,  36,    4,  -24 }, // 'F'
	  {  2889,  21,  22,  36,    7,  -26 }, // 'G'
	  {  2947,  36,  35,  36,    0,  -33 }, // 'H'
	  {  3105,  36,  33,  36,    0,  -31 }, // 'I'
	  {  3254,  30,  29,  37,    3,  -31 }, // 'J'
	  {  3363,  30,  26,  36,    3,  -28 }, // 'K'
	  {  3461,  36,  26,  37,    0,  -28 }, // 'L'
	  {  3578,  22,  15,  36,    7,  -24 }, // 'M'
	  {  3620,  36,  21,  36,    0,  -26 }, // 'N'
	  {  3715,  36,  32,  36,    0,  -32 }, // 'O'
	  {  3859,  36,  32,  36,    0,  -32 }, // 'P'
	  {  4003,  36,  30,  36,    0,  -30 }, // 'Q'
	  {  4138,  36,  34,  36,    0,  -32 }, // 'R'
	  {  4291,  36,  17,  36,    0,  -24 }, // 'S'
	  {  4368,  36,  31,  36,    0,  -31 }, // 'T'
	  {  4508,  36,  34,  36,    0,  -32 }, // 'U'
	  {  4661,  36,  28,  36,    0,  -32 }, // 'V'
	  {  4787,  36,  34,  36,    0,  -32 }, // 'W'
	  {  4940,  36,  34,  36,    0,  -32 }, // 'X'
	  {  5093,  36,  27,  37,    0,  -25 }, // 'Y'
	  {  5215,  36,  35,  37,    0,  -33 }, // 'Z'
	  {  5373,   1,   1,  36,    0,    0 }, // '['
	  {  5374,   1,   1,  36,    0,    0 }, // '\'
	  {  5375,   1,   1,  36,    0,    0 }, // ']'
	  {  5376,   1,   1,  36,    0,    0 }, // '^'
	  {  5377,   1,   1,  36,    0,    0 }, // '_'
	  {  5378,   1,   1,  36,    0,    0 }, // '`'
	  {  5379,   1,   1,  36,    0,    0 }, // 'a'
	  {  5380,   1,   1,  36,    0,    0 }, // 'b'
	  {  5381,   1,   1,  36,    0,    0 }, // 'c'
	  {  5382,   1,   1,  36,    0,    0 }, // 'd'
	  {  5383,   1,   1,  36,    0,    0 }, // 'e'
	  {  5384,   1,   1,  36,    0,    0 }, // 'f'
	  {  5385,   1,   1,  36,    0,    0 }, // 'g'
	  {  5386,   1,   1,  36,    0,    0 }, // 'h'
	  {  5387,   1,   1,  36,    0,    0 }, // 'i'
	  {  5388,   1,   1,  36,    0,    0 }, // 'j'
	  {  5389,   1,   1,  36,    0,    0 }, // 'k'
	  {  5390,   1,   1,  36,    0,    0 }, // 'l'
	  {  5391,   1,   1,  36,    0,    0 }, // 'm'
	  {  5392,   1,   1,  36,    0,    0 }, // 'n'
	  {  5393,   1,   1,  36,    0,    0 }, // 'o'
	  {  5394,   1,   1,  36,    0,    0 }, // 'p'
	  {  5395,   1,   1,  36,    0,    0 }, // 'q'
	  {  5396,   1,   1,  36,    0,    0 }, // 'r'
	  {  5397,   1,   1,  36,    0,    0 }, // 's'
	  {  5398,   1,   1,  36,    0,    0 }, // 't'
	  {  5399,   1,   1,  36,    0,    0 }, // 'u'
	  {  5400,   1,   1,  36,    0,    0 }, // 'v'
	  {  5401,   1,   1,  36,    0,    0 }, // 'w'
	  {  5402,   1,   1,  36,    0,    0 }, // 'x'
	  {  5403,   1,   1,  36,    0,    0 }, // 'y'
	  {  5404,   1,   1,  36,    0,    0 }, // 'z'
	  {  5405,   1,   1,  36,    0,    0 }, // '{'
	  {  5406,   1,   1,  36,    0,    0 }, // '|'
	  {  5407,   1,   1,  36,    0,    0 } // '}'
};

const GFXfont Meteocons_Regular_35 PROGMEM = {
(uint8_t  *)Meteocons_Regular_35Bitmaps,(GFXglyph *)Meteocons_Regular_35Glyphs,0x20, 0x7E, 36};