#include "common.h"

const char *g_messages_chs[] = {
	"Ĭ��",
	"����",
	"����",
	"��׼",
	"M33 driver",
	"Sony NP9660",
	"Inferno",
	"CPU Ƶ��(XMB) ",
	"CPU Ƶ��(GAME)",
	"USB �豸      ",
	"UMD ISO ģʽ  ",
	"����ISO VIDEO ",
	"�ָ��˵�  ->",
	"�ر��豸",
	"�����豸",
	"�����豸",
	"����VSH ",
	"�˳�",
	"PRO VSH�˵�",
	"Flash",
	"UMD Disc",
	"Memory Stick",
	"��",
};

u8 message_test_chs[NELEMS(g_messages_chs) == MSG_END ? 0 : -1];