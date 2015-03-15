#include <psptypes.h>

u8 msx_asc[] = 
{
	//ASC 6*12
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x10,0x10,0x10,0x10,0x10,
	0x10,0x10,0x10,0x10,0x10,0x10,0x1C,0x00,0x00,0x00,0x00,0x00,
	0x10,0x10,0x10,0x10,0x10,0x10,0xF0,0x00,0x00,0x00,0x00,0x00,
	0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
	0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x30,0x78,0x78,0x78,0x30,0x00,0x00,0x00,0x00,
	0xFC,0xFC,0xFC,0xCC,0x84,0x84,0x84,0xCC,0xFC,0xFC,0xFC,0xFC,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x1C,0x0C,0x0C,0x14,0x10,0x30,0x48,0x48,0x30,0x00,0x00,
	0x00,0x38,0x44,0x44,0x38,0x10,0x7C,0x10,0x10,0x10,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x0C,0x34,0x2C,0x34,0x24,0x24,0x2C,0x6C,0x60,0x00,0x00,
	0x00,0x54,0x54,0x28,0x28,0x6C,0x28,0x28,0x54,0x54,0x00,0x00,
	0x10,0x10,0x10,0x10,0x10,0x10,0xFC,0x10,0x10,0x10,0x10,0x10,
	0x00,0x04,0x0C,0x1C,0x3C,0x7C,0x3C,0x1C,0x0C,0x04,0x00,0x00,
	0x00,0x10,0x38,0x10,0x10,0x10,0x10,0x10,0x38,0x10,0x00,0x00,
	0x00,0x28,0x28,0x28,0x28,0x28,0x28,0x00,0x28,0x28,0x00,0x00,
	0x00,0x3C,0x54,0x54,0x54,0x34,0x14,0x14,0x14,0x14,0x3C,0x00,
	0x10,0x10,0x10,0x10,0x10,0x10,0xFC,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x10,0x10,0x10,0x10,0x10,
	0x10,0x10,0x10,0x10,0x10,0x10,0xF0,0x10,0x10,0x10,0x10,0x10,
	0x00,0x10,0x38,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,
	0x10,0x10,0x10,0x10,0x10,0x10,0x1C,0x10,0x10,0x10,0x10,0x10,
	0x00,0x00,0x00,0x00,0x08,0x7C,0x08,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x20,0x7C,0x20,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x20,0x00,0x00,
	0x00,0x28,0x50,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x28,0x28,0xFC,0x28,0x50,0xFC,0x50,0x50,0x00,0x00,
	0x00,0x20,0x78,0xA8,0xA0,0x60,0x30,0x28,0xA8,0xF0,0x20,0x00,
	0x00,0x00,0x48,0xA8,0xB0,0x50,0x28,0x34,0x54,0x48,0x00,0x00,
	0x00,0x00,0x20,0x50,0x50,0x78,0xA8,0xA8,0x90,0x6C,0x00,0x00,
	0x00,0x40,0x40,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x04,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x08,0x04,0x00,
	0x00,0x40,0x20,0x10,0x10,0x10,0x10,0x10,0x10,0x20,0x40,0x00,
	0x00,0x00,0x00,0x20,0xA8,0x70,0x70,0xA8,0x20,0x00,0x00,0x00,
	0x00,0x00,0x20,0x20,0x20,0xF8,0x20,0x20,0x20,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x40,0x80,
	0x00,0x00,0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,
	0x00,0x08,0x10,0x10,0x10,0x20,0x20,0x40,0x40,0x40,0x80,0x00,
	0x00,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x00,0x00,
	0x00,0x00,0x20,0x60,0x20,0x20,0x20,0x20,0x20,0x70,0x00,0x00,
	0x00,0x00,0x70,0x88,0x88,0x10,0x20,0x40,0x80,0xF8,0x00,0x00,
	0x00,0x00,0x70,0x88,0x08,0x30,0x08,0x08,0x88,0x70,0x00,0x00,
	0x00,0x00,0x10,0x30,0x50,0x50,0x90,0x78,0x10,0x18,0x00,0x00,
	0x00,0x00,0xF8,0x80,0x80,0xF0,0x08,0x08,0x88,0x70,0x00,0x00,
	0x00,0x00,0x70,0x90,0x80,0xF0,0x88,0x88,0x88,0x70,0x00,0x00,
	0x00,0x00,0xF8,0x90,0x10,0x20,0x20,0x20,0x20,0x20,0x00,0x00,
	0x00,0x00,0x70,0x88,0x88,0x70,0x88,0x88,0x88,0x70,0x00,0x00,
	0x00,0x00,0x70,0x88,0x88,0x88,0x78,0x08,0x48,0x70,0x00,0x00,
	0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x20,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x20,0x20,0x00,
	0x00,0x04,0x08,0x10,0x20,0x40,0x20,0x10,0x08,0x04,0x00,0x00,
	0x00,0x00,0x00,0x00,0xF8,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,
	0x00,0x40,0x20,0x10,0x08,0x04,0x08,0x10,0x20,0x40,0x00,0x00,
	0x00,0x00,0x70,0x88,0x88,0x10,0x20,0x20,0x00,0x20,0x00,0x00,
	0x00,0x00,0x70,0x88,0x98,0xA8,0xA8,0xB8,0x80,0x78,0x00,0x00,
	0x00,0x00,0x20,0x20,0x30,0x50,0x50,0x78,0x48,0xCC,0x00,0x00,
	0x00,0x00,0xF0,0x48,0x48,0x70,0x48,0x48,0x48,0xF0,0x00,0x00,
	0x00,0x00,0x78,0x88,0x80,0x80,0x80,0x80,0x88,0x70,0x00,0x00,
	0x00,0x00,0xF0,0x48,0x48,0x48,0x48,0x48,0x48,0xF0,0x00,0x00,
	0x00,0x00,0xF8,0x48,0x50,0x70,0x50,0x40,0x48,0xF8,0x00,0x00,
	0x00,0x00,0xF8,0x48,0x50,0x70,0x50,0x40,0x40,0xE0,0x00,0x00,
	0x00,0x00,0x38,0x48,0x80,0x80,0x9C,0x88,0x48,0x30,0x00,0x00,
	0x00,0x00,0xCC,0x48,0x48,0x78,0x48,0x48,0x48,0xCC,0x00,0x00,
	0x00,0x00,0xF8,0x20,0x20,0x20,0x20,0x20,0x20,0xF8,0x00,0x00,
	0x00,0x00,0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x90,0xE0,0x00,
	0x00,0x00,0xEC,0x48,0x50,0x60,0x50,0x50,0x48,0xEC,0x00,0x00,
	0x00,0x00,0xE0,0x40,0x40,0x40,0x40,0x40,0x44,0xFC,0x00,0x00,
	0x00,0x00,0xD8,0xD8,0xD8,0xD8,0xA8,0xA8,0xA8,0xA8,0x00,0x00,
	0x00,0x00,0xDC,0x48,0x68,0x68,0x58,0x58,0x48,0xE8,0x00,0x00,
	0x00,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x00,0x00,
	0x00,0x00,0xF0,0x48,0x48,0x70,0x40,0x40,0x40,0xE0,0x00,0x00,
	0x00,0x00,0x70,0x88,0x88,0x88,0x88,0xE8,0x98,0x70,0x18,0x00,
	0x00,0x00,0xF0,0x48,0x48,0x70,0x50,0x48,0x48,0xEC,0x00,0x00,
	0x00,0x00,0x78,0x88,0x80,0x60,0x10,0x08,0x88,0xF0,0x00,0x00,
	0x00,0x00,0xF8,0xA8,0x20,0x20,0x20,0x20,0x20,0x70,0x00,0x00,
	0x00,0x00,0xCC,0x48,0x48,0x48,0x48,0x48,0x48,0x30,0x00,0x00,
	0x00,0x00,0xCC,0x48,0x48,0x50,0x50,0x30,0x20,0x20,0x00,0x00,
	0x00,0x00,0xA8,0xA8,0xA8,0x70,0x50,0x50,0x50,0x50,0x00,0x00,
	0x00,0x00,0xD8,0x50,0x50,0x20,0x20,0x50,0x50,0xD8,0x00,0x00,
	0x00,0x00,0xD8,0x50,0x50,0x20,0x20,0x20,0x20,0x70,0x00,0x00,
	0x00,0x00,0xF8,0x90,0x10,0x20,0x20,0x40,0x48,0xF8,0x00,0x00,
	0x00,0x38,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x38,0x00,
	0x00,0x40,0x40,0x40,0x20,0x20,0x10,0x10,0x10,0x08,0x00,0x00,
	0x00,0x70,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x70,0x00,
	0x00,0x20,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,
	0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x30,0x48,0x38,0x48,0x3C,0x00,0x00,
	0x00,0x00,0xC0,0x40,0x40,0x70,0x48,0x48,0x48,0x70,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x38,0x48,0x40,0x40,0x38,0x00,0x00,
	0x00,0x00,0x18,0x08,0x08,0x38,0x48,0x48,0x48,0x3C,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x30,0x48,0x78,0x40,0x38,0x00,0x00,
	0x00,0x00,0x1C,0x20,0x20,0x78,0x20,0x20,0x20,0x78,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x3C,0x48,0x30,0x40,0x78,0x44,0x38,
	0x00,0x00,0xC0,0x40,0x40,0x70,0x48,0x48,0x48,0xEC,0x00,0x00,
	0x00,0x00,0x20,0x00,0x00,0x60,0x20,0x20,0x20,0x70,0x00,0x00,
	0x00,0x00,0x10,0x00,0x00,0x30,0x10,0x10,0x10,0x10,0x10,0xE0,
	0x00,0x00,0xC0,0x40,0x40,0x5C,0x50,0x70,0x48,0xEC,0x00,0x00,
	0x00,0x00,0xE0,0x20,0x20,0x20,0x20,0x20,0x20,0xF8,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0xF0,0xA8,0xA8,0xA8,0xA8,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0xF0,0x48,0x48,0x48,0xEC,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x30,0x48,0x48,0x48,0x30,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0xF0,0x48,0x48,0x48,0x70,0x40,0xE0,
	0x00,0x00,0x00,0x00,0x00,0x38,0x48,0x48,0x48,0x38,0x08,0x1C,
	0x00,0x00,0x00,0x00,0x00,0xD8,0x60,0x40,0x40,0xE0,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x78,0x40,0x30,0x08,0x78,0x00,0x00,
	0x00,0x00,0x00,0x20,0x20,0x70,0x20,0x20,0x20,0x18,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0xD8,0x48,0x48,0x48,0x3C,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0xEC,0x48,0x50,0x30,0x20,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0xA8,0xA8,0x70,0x50,0x50,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0xD8,0x50,0x20,0x50,0xD8,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0xEC,0x48,0x50,0x30,0x20,0x20,0xC0,
	0x00,0x00,0x00,0x00,0x00,0x78,0x10,0x20,0x20,0x78,0x00,0x00,
	0x00,0x18,0x10,0x10,0x10,0x20,0x10,0x10,0x10,0x10,0x18,0x00,
	0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
	0x00,0x60,0x20,0x20,0x20,0x10,0x20,0x20,0x20,0x20,0x60,0x00,
	0x40,0xA4,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

u8 msx_chs[] = 
{
	//�Զ��� ������Χ��ʾ
	0xFF,0xE0,0x80,0x20,0x80,0x20,0x80,0x20,0x80,0x20,0x80,0x20,0x80,0x20,0x80,0x20,0x80,0x20,0x80,0x20,0xFF,0xE0,0x00,0x00,

	//�Զ���
	0x10,0x00,0x1F,0x80,0x29,0x00,0x46,0x00,0x09,0x00,0x30,0x80,0xFF,0xE0,0x24,0x80,0x3F,0x80,0x24,0x80,0x3F,0x80,0x00,0x00,
	0x27,0xE0,0x10,0x20,0x42,0x20,0x42,0x20,0x7F,0xA0,0x46,0x20,0x4A,0x20,0x52,0x20,0x62,0x20,0x4E,0x20,0x40,0xE0,0x00,0x00,
	0x20,0x40,0x2F,0xE0,0xF0,0x00,0x20,0x00,0x6F,0xE0,0x71,0x00,0xA5,0x80,0xA5,0x40,0x29,0x20,0x31,0x20,0x27,0x00,0x00,0x00,
	0x12,0x00,0xFF,0xE0,0x12,0x00,0x7F,0xC0,0x44,0x80,0x24,0x80,0x15,0x00,0xFF,0xE0,0x15,0x00,0x24,0x80,0xC4,0x60,0x00,0x00,
	0x04,0x00,0x44,0x40,0x44,0x40,0x44,0x40,0x7F,0xC0,0x04,0x00,0x44,0x40,0x44,0x40,0x44,0x40,0x44,0x40,0x7F,0xC0,0x00,0x00,
	0x11,0x00,0x0A,0x00,0x3F,0xC0,0x24,0x40,0x3F,0xC0,0x24,0x40,0x3F,0xC0,0x04,0x00,0xFF,0xE0,0x04,0x00,0x04,0x00,0x00,0x00,
	0x10,0x40,0x3F,0xE0,0x60,0x80,0xBF,0x80,0x20,0x80,0x3F,0x80,0x10,0x00,0x1F,0x80,0x69,0x00,0x06,0x00,0xF9,0xE0,0x00,0x00,
	0x21,0x00,0x21,0x00,0xF7,0xC0,0x21,0x00,0x31,0x00,0x6F,0xE0,0xA1,0x00,0x27,0xC0,0x21,0x00,0x21,0x00,0xEF,0xE0,0x00,0x00,
	0x10,0x80,0x09,0x00,0x7F,0xC0,0x04,0x00,0x04,0x00,0x04,0x00,0xFF,0xE0,0x0A,0x00,0x11,0x00,0x20,0x80,0xC0,0x60,0x00,0x00,
	0x44,0x00,0x5F,0xE0,0xC4,0x00,0xE5,0x00,0xC5,0x20,0x49,0x40,0x4B,0x80,0x51,0x00,0x42,0x80,0x44,0x40,0x58,0x20,0x00,0x00,
	0x21,0x00,0xFF,0xE0,0x31,0x80,0x6B,0x40,0xA5,0x20,0x3F,0x80,0x00,0x00,0xFF,0xE0,0x15,0x00,0x24,0x80,0xCC,0x40,0x00,0x00,
	0x04,0x00,0xFF,0xE0,0x44,0x40,0x2A,0x80,0x15,0x00,0x2A,0x80,0xDF,0x40,0x04,0x00,0xFF,0xE0,0x04,0x00,0x04,0x00,0x00,0x00,
	0x2F,0xE0,0x22,0x80,0xF7,0xC0,0x24,0x40,0x67,0xC0,0x74,0x40,0xA7,0xC0,0xA1,0x00,0x2F,0xE0,0x22,0x80,0x2C,0x60,0x00,0x00,
	0xF9,0x00,0xD9,0x40,0xA9,0x40,0xFF,0xE0,0x21,0x00,0xF9,0x00,0x21,0x80,0xFA,0x80,0x02,0x40,0xB4,0x40,0xA8,0x20,0x00,0x00,
	0x17,0xE0,0x50,0x80,0x5B,0xE0,0x52,0x20,0xFE,0xA0,0x22,0xA0,0x6A,0xA0,0xAA,0xA0,0x11,0x40,0x22,0x20,0xCC,0x20,0x00,0x00,
	0x10,0x00,0x7B,0xC0,0x10,0x40,0x10,0x40,0xFF,0xC0,0x12,0x00,0x52,0x20,0x5E,0x20,0x53,0xE0,0xB0,0x00,0x8F,0xE0,0x00,0x00,
	0x04,0x00,0x3F,0xC0,0x20,0x40,0x20,0x40,0x3F,0xC0,0x20,0x00,0x3F,0xC0,0x30,0x40,0x50,0x40,0x50,0x40,0x9F,0xC0,0x00,0x00,
	0x41,0x00,0x21,0x00,0x21,0x00,0x01,0x00,0xC1,0x00,0x41,0x00,0x42,0x80,0x42,0x80,0x54,0x40,0x68,0x40,0x10,0x20,0x00,0x00,
	0x47,0x80,0x24,0x80,0x04,0x80,0x04,0xE0,0xE8,0x00,0x37,0xC0,0x24,0x40,0x22,0x80,0x31,0x00,0x22,0x80,0x1C,0x60,0x00,0x00,
	0x02,0x80,0x02,0x40,0xFF,0xE0,0x02,0x00,0x02,0x00,0xFE,0x00,0x12,0x00,0x11,0x00,0x11,0x20,0x1C,0xA0,0xE0,0x60,0x00,0x00,
	0x8F,0xC0,0x48,0x40,0x4F,0xC0,0x08,0x40,0xCF,0xC0,0x48,0x00,0x4B,0x40,0x48,0x80,0x4E,0x40,0xB0,0x00,0x8F,0xE0,0x00,0x00,
	0x7F,0xC0,0x04,0x00,0x04,0x00,0x04,0x00,0xFF,0xE0,0x0A,0x00,0x0A,0x00,0x12,0x00,0x12,0x20,0x22,0x20,0xC3,0xE0,0x00,0x00,
	0x7F,0xC0,0x44,0x40,0x44,0x40,0x7F,0xC0,0x44,0x40,0x44,0x40,0x7F,0xC0,0x44,0x40,0x44,0x40,0x84,0x40,0x85,0xC0,0x00,0x00,
	0x12,0x80,0x7E,0x40,0x12,0x00,0xFF,0xE0,0x22,0x00,0xFE,0x40,0x52,0x80,0x7D,0x00,0x11,0x20,0xFE,0xA0,0x14,0x60,0x00,0x00,
	0x7F,0xC0,0x04,0x00,0xFF,0xE0,0x04,0x00,0x3F,0x80,0x24,0x80,0x3F,0x80,0x24,0x80,0x7F,0xC0,0x04,0x00,0xFF,0xE0,0x00,0x00,
	0x05,0x00,0xA5,0x00,0x6F,0xE0,0x29,0x00,0x5F,0xE0,0x49,0x00,0xC9,0x00,0x4F,0xE0,0x49,0x00,0x49,0x00,0x0F,0xE0,0x00,0x00,
};

u8 msx_cht[] = 
{
	//�Զ��� ������Χ��ʾ
	0xFF,0xE0,0x80,0x20,0x80,0x20,0x80,0x20,0x80,0x20,0x80,0x20,0x80,0x20,0x80,0x20,0x80,0x20,0x80,0x20,0xFF,0xE0,0x00,0x00,

	//�Զ���
	0x04,0x00,0x44,0x40,0x44,0x40,0x44,0x40,0x7F,0xC0,0x04,0x00,0x44,0x40,0x44,0x40,0x44,0x40,0x44,0x40,0x7F,0xC0,0x00,0x00,
	0x7F,0xC0,0x44,0x40,0x44,0x40,0x7F,0xC0,0x44,0x40,0x44,0x40,0x7F,0xC0,0x44,0x40,0x44,0x40,0x84,0x40,0x85,0xC0,0x00,0x00,
	0x02,0x80,0x02,0x40,0xFF,0xE0,0x02,0x00,0x02,0x00,0xFE,0x00,0x12,0x00,0x11,0x00,0x11,0x20,0x1C,0xA0,0xE0,0x60,0x00,0x00,
	0x44,0x00,0x5F,0xE0,0xC4,0x00,0xE5,0x00,0xC5,0x20,0x49,0x40,0x4B,0x80,0x51,0x00,0x42,0x80,0x44,0x40,0x58,0x20,0x00,0x00,
	0x7F,0xC0,0x04,0x00,0xFF,0xE0,0x04,0x00,0x3F,0x80,0x24,0x80,0x3F,0x80,0x24,0x80,0x7F,0xC0,0x04,0x00,0xFF,0xE0,0x00,0x00,
	0x10,0x00,0x7B,0xC0,0x10,0x40,0x10,0x40,0xFF,0xC0,0x12,0x00,0x52,0x20,0x5E,0x20,0x53,0xE0,0xB0,0x00,0x8F,0xE0,0x00,0x00,
	0x8F,0xC0,0x48,0x40,0x4F,0xC0,0x08,0x40,0xCF,0xC0,0x48,0x00,0x4B,0x40,0x48,0x80,0x4E,0x40,0xB0,0x00,0x8F,0xE0,0x00,0x00,
	0x44,0x40,0x44,0x40,0xEE,0x40,0x44,0x40,0x5F,0x60,0x60,0x40,0xC4,0x40,0x4E,0x40,0x44,0x40,0x47,0x40,0xD8,0x40,0x00,0x00,
	0x21,0x00,0x7D,0x00,0x45,0xE0,0x47,0x40,0x7D,0x40,0x41,0x40,0x7D,0x40,0x64,0x80,0x64,0x80,0xBD,0x40,0xA6,0x20,0x00,0x00,
	0x04,0x00,0xFF,0xE0,0x44,0x40,0x2A,0x80,0x15,0x00,0x2A,0x80,0xDF,0x40,0x04,0x00,0xFF,0xE0,0x04,0x00,0x04,0x00,0x00,0x00,
	0x43,0x80,0xF2,0x80,0x02,0x80,0xF4,0xE0,0x08,0x00,0xF7,0xC0,0x02,0x40,0xF2,0x80,0x91,0x00,0xF2,0x80,0x9C,0x60,0x00,0x00,
	0xFB,0xC0,0x8A,0x40,0xFB,0xC0,0x8A,0x40,0xFB,0xC0,0x82,0x40,0xBF,0x40,0x8A,0x40,0xB2,0x40,0x8E,0x40,0x80,0xC0,0x00,0x00,
	0x24,0x80,0x2F,0xC0,0x24,0x80,0x5F,0xE0,0x48,0x00,0xDF,0xC0,0x6A,0x40,0x4F,0xC0,0x4A,0x40,0x4F,0xC0,0x4A,0x40,0x00,0x00,
	0x7B,0xC0,0x4A,0x40,0x7B,0xC0,0x3F,0x80,0x24,0x80,0x3F,0x80,0x24,0x80,0x3F,0x80,0x04,0x00,0xFF,0xE0,0x04,0x00,0x00,0x00,
	0x24,0x00,0x27,0xE0,0x4C,0x40,0xA7,0xC0,0x24,0x40,0x47,0xC0,0xC2,0x00,0x47,0xC0,0x4A,0x80,0x41,0x80,0x4E,0x60,0x00,0x00,
	0x10,0x00,0x3F,0xC0,0x6A,0x80,0x2A,0x80,0x7F,0xE0,0x2A,0x80,0x2A,0x80,0xFF,0xE0,0x00,0x00,0x49,0x40,0x89,0x20,0x00,0x00,
	0x12,0x00,0xFF,0xE0,0x12,0x00,0x7F,0xC0,0x44,0x80,0x24,0x80,0x15,0x00,0xFF,0xE0,0x15,0x00,0x24,0x80,0xC4,0x60,0x00,0x00,
	0x45,0x00,0x2F,0xE0,0x99,0x00,0x4F,0xE0,0x29,0x00,0xCF,0xE0,0x40,0x00,0x04,0x00,0xFF,0xE0,0x04,0x00,0x04,0x00,0x00,0x00,
	0x21,0x00,0xFF,0xE0,0x31,0x80,0x6B,0x40,0xA5,0x20,0x3F,0x80,0x00,0x00,0xFF,0xE0,0x15,0x00,0x24,0x80,0xCC,0x40,0x00,0x00,
	0x11,0x40,0x7D,0x40,0x11,0x00,0xFF,0xE0,0x11,0x00,0x7D,0x40,0x55,0x40,0x7C,0x80,0x54,0xA0,0xFD,0xA0,0x12,0x60,0x00,0x00,
	0x47,0xE0,0xF1,0x20,0x05,0x20,0xF5,0x20,0x02,0x20,0xF4,0xC0,0x01,0x00,0xF2,0xA0,0x9A,0x20,0xFA,0x40,0x93,0xC0,0x00,0x00,
	0x4F,0xE0,0x42,0x80,0xFF,0xE0,0x4A,0xA0,0xEF,0xE0,0xD0,0x00,0xC7,0xC0,0x40,0x00,0x5F,0xE0,0x45,0x40,0x5B,0x20,0x00,0x00,
	0x2F,0xE0,0x22,0x80,0xF7,0xC0,0x24,0x40,0x67,0xC0,0x74,0x40,0xA7,0xC0,0xA1,0x00,0x2F,0xE0,0x22,0x80,0x2C,0x60,0x00,0x00,
	0x17,0xE0,0x51,0x00,0x5B,0xE0,0x52,0x20,0xFB,0xE0,0x22,0x20,0x6B,0xE0,0xAA,0x20,0x13,0xE0,0x21,0x40,0xC6,0x20,0x00,0x00,
	0xF9,0x00,0xD9,0x40,0xA9,0x40,0xFF,0xE0,0x21,0x00,0xF9,0x00,0x21,0x80,0xFA,0x80,0x02,0x40,0xB4,0x40,0xA8,0x20,0x00,0x00,
	0xFB,0xC0,0x8A,0x40,0xFB,0xC0,0x91,0x40,0xAA,0xC0,0x91,0x40,0x9B,0x40,0xAA,0xC0,0xBB,0xC0,0x8A,0x40,0x90,0xC0,0x00,0x00,
};