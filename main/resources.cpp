
#include "./resources.h"

#include "./font5x8.h"
#include "./font11x16.h"


const FontInfo smallFontAscii = 
{
	' ', '~', font5x8Ascii, 0
};
const FontInfo smallFontRus = 
{
	0x410, 0x44F, font5x8Rus, 0
};

const FontInfo smallFontData[] = {smallFontAscii, smallFontRus};

const FontInfo bigFontAscii = 
{
	' ', '~', font11x16, font11x16Descr
};

const FontInfo bigFontData[]={bigFontAscii};


RastrFont<const uint8_t*, const CharInfo* > smallFont(smallFontData, 2, 5, 8, '?');

RastrFont<const uint8_t*, const CharInfo* > bigFont(bigFontData, 1, 11, 16, '?');





