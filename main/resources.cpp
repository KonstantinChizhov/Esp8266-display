
#include "./resources.h"

#include "./font5x8.h"
#include "./font11x16.h"


FontInfo smallFontAscii = 
{
	' ', '~', font5x8Ascii, 0
};
FontInfo smallFontRus = 
{
	0x410, 0x44F, font5x8Rus, 0
};

FontInfo smallFontData[] = {smallFontAscii, smallFontRus};

FontInfo bigFontAscii = 
{
	' ', '~', font11x16, font11x16Descr
};

FontInfo bigFontData[]={bigFontAscii};


RastrFont<const uint8_t*, const CharInfo* > smallFont(smallFontData, 2, 5, 8, '?');

RastrFont<const uint8_t*, const CharInfo* > bigFont(bigFontData, 1, 11, 16, '?');





