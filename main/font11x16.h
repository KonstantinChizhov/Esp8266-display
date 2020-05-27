

const uint8_t font11x16[] = 
{	// @0 ' ' (2 pixels wide)
	0x00, 0x00, 
	0x00, 0x00, 

	// @4 '!' (3 pixels wide)
	0xFF, 0x0E, 
	0xFF, 0x0E, 
	0x1F, 0x0E, 

	// @10 '"' (5 pixels wide)
	0x1F, 0x00, 
	0x1F, 0x00, 
	0x00, 0x00, 
	0x1F, 0x00, 
	0x1F, 0x00, 

	// @20 '#' (10 pixels wide)
	0x80, 0x01, 
	0x90, 0x09, 
	0xD0, 0x0F, 
	0xFC, 0x01, 
	0x9E, 0x01, 
	0x90, 0x0F, 
	0xF0, 0x07, 
	0xBE, 0x01, 
	0x92, 0x01, 
	0x10, 0x00, 

	// @40 '$' (8 pixels wide)
	0x38, 0x06, 
	0x7C, 0x0C, 
	0xEC, 0x0C, 
	0xFF, 0x3F, 
	0xFF, 0x3F, 
	0xCC, 0x0C, 
	0xCC, 0x0F, 
	0x80, 0x07, 

	// @56 '%' (14 pixels wide)
	0x08, 0x00, 
	0x3E, 0x00, 
	0x23, 0x00, 
	0x21, 0x00, 
	0x3F, 0x0C, 
	0x1E, 0x07, 
	0xC0, 0x01, 
	0x70, 0x00, 
	0x1C, 0x03, 
	0xC6, 0x0F, 
	0x43, 0x08, 
	0x40, 0x08, 
	0xC0, 0x0F, 
	0x80, 0x07, 

	// @84 '&' (11 pixels wide)
	0xC0, 0x07, 
	0xEC, 0x0F, 
	0x7E, 0x0E, 
	0x7F, 0x0C, 
	0xF3, 0x0C, 
	0xE3, 0x0D, 
	0x83, 0x0F, 
	0x00, 0x07, 
	0xE0, 0x0F, 
	0xE0, 0x0D, 
	0x00, 0x08, 

	// @106 ''' (2 pixels wide)
	0x1F, 0x00, 
	0x1F, 0x00, 

	// @110 '(' (4 pixels wide)
	0xE0, 0x01, 
	0xFC, 0x0F, 
	0xFF, 0x3F, 
	0x03, 0x30, 

	// @118 ')' (4 pixels wide)
	0x01, 0x20, 
	0x07, 0x38, 
	0xFF, 0x3F, 
	0xF8, 0x07, 

	// @126 '*' (7 pixels wide)
	0x24, 0x00, 
	0x24, 0x00, 
	0x1C, 0x00, 
	0xFF, 0x00, 
	0x18, 0x00, 
	0x3C, 0x00, 
	0x24, 0x00, 

	// @140 '+' (9 pixels wide)
	0xC0, 0x00, 
	0xC0, 0x00, 
	0xC0, 0x00, 
	0xFC, 0x0F, 
	0xFC, 0x0F, 
	0xC0, 0x00, 
	0xC0, 0x00, 
	0xC0, 0x00, 
	0xC0, 0x00, 

	// @158 ',' (3 pixels wide)
	0x00, 0x3E, 
	0x00, 0x3E, 
	0x00, 0x0E, 

	// @164 '-' (4 pixels wide)
	0xC0, 0x01, 
	0xC0, 0x01, 
	0xC0, 0x01, 
	0xC0, 0x01, 

	// @172 '.' (3 pixels wide)
	0x00, 0x0E, 
	0x00, 0x0E, 
	0x00, 0x0E, 

	// @178 '/' (5 pixels wide)
	0x00, 0x10, 
	0x00, 0x1F, 
	0xE0, 0x03, 
	0x7E, 0x00, 
	0x07, 0x00, 

	// @188 '0' (8 pixels wide)
	0xFC, 0x03, 
	0xFE, 0x07, 
	0x0F, 0x0F, 
	0x03, 0x0C, 
	0x03, 0x0C, 
	0x0F, 0x0F, 
	0xFE, 0x07, 
	0xFC, 0x03, 

	// @204 '1' (7 pixels wide)
	0x06, 0x0C, 
	0x07, 0x0C, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0x00, 0x0C, 
	0x00, 0x0C, 

	// @218 '2' (8 pixels wide)
	0x06, 0x0E, 
	0x07, 0x0F, 
	0x83, 0x0F, 
	0xC3, 0x0D, 
	0xE7, 0x0C, 
	0x7F, 0x0C, 
	0x3E, 0x0C, 
	0x1C, 0x0C, 

	// @234 '3' (8 pixels wide)
	0x06, 0x0C, 
	0x03, 0x0C, 
	0x63, 0x0C, 
	0x63, 0x0C, 
	0x67, 0x0C, 
	0xFF, 0x0F, 
	0xDE, 0x07, 
	0x8C, 0x03, 

	// @250 '4' (8 pixels wide)
	0xC0, 0x03, 
	0x70, 0x03, 
	0x38, 0x03, 
	0x0E, 0x03, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0x00, 0x03, 

	// @266 '5' (8 pixels wide)
	0x00, 0x0E, 
	0x7F, 0x0C, 
	0x3F, 0x0C, 
	0x37, 0x0C, 
	0x77, 0x0C, 
	0xF7, 0x0F, 
	0xE7, 0x07, 
	0xC0, 0x03, 

	// @282 '6' (8 pixels wide)
	0xF8, 0x03, 
	0xFE, 0x07, 
	0xFE, 0x0F, 
	0x37, 0x0C, 
	0x33, 0x0C, 
	0x73, 0x0E, 
	0xE3, 0x0F, 
	0xC6, 0x07, 

	// @298 '7' (8 pixels wide)
	0x07, 0x00, 
	0x07, 0x08, 
	0x07, 0x0E, 
	0xC7, 0x0F, 
	0xF7, 0x03, 
	0xFF, 0x00, 
	0x1F, 0x00, 
	0x07, 0x00, 

	// @314 '8' (8 pixels wide)
	0x9C, 0x07, 
	0xFE, 0x0F, 
	0xFF, 0x0E, 
	0x63, 0x0C, 
	0x63, 0x0C, 
	0xFF, 0x0E, 
	0xFE, 0x0F, 
	0x9C, 0x07, 

	// @330 '9' (8 pixels wide)
	0x7C, 0x0C, 
	0xFE, 0x0C, 
	0xE7, 0x0C, 
	0xC3, 0x0C, 
	0xC3, 0x0C, 
	0x7F, 0x0F, 
	0xFE, 0x07, 
	0xF8, 0x01, 

	// @346 ':' (2 pixels wide)
	0x38, 0x0E, 
	0x38, 0x0E, 

	// @350 ';' (3 pixels wide)
	0x00, 0x30, 
	0x38, 0x3E, 
	0x38, 0x0E, 

	// @356 '<' (9 pixels wide)
	0xC0, 0x00, 
	0xE0, 0x01, 
	0xE0, 0x01, 
	0x30, 0x01, 
	0x30, 0x03, 
	0x30, 0x03, 
	0x18, 0x06, 
	0x18, 0x06, 
	0x0C, 0x04, 

	// @374 '=' (9 pixels wide)
	0x30, 0x03, 
	0x30, 0x03, 
	0x30, 0x03, 
	0x30, 0x03, 
	0x30, 0x03, 
	0x30, 0x03, 
	0x30, 0x03, 
	0x30, 0x03, 
	0x30, 0x03, 

	// @392 '>' (9 pixels wide)
	0x18, 0x06, 
	0x18, 0x06, 
	0x30, 0x03, 
	0x30, 0x03, 
	0x30, 0x03, 
	0xE0, 0x01, 
	0xE0, 0x01, 
	0xC0, 0x00, 
	0xC0, 0x00, 

	// @410 '?' (6 pixels wide)
	0x06, 0x00, 
	0x83, 0x0E, 
	0xE3, 0x0E, 
	0xF3, 0x0E, 
	0x7F, 0x00, 
	0x3E, 0x00, 

	// @422 '@' (12 pixels wide)
	0xE0, 0x07, 
	0x38, 0x0C, 
	0x0C, 0x18, 
	0xC6, 0x31, 
	0xE6, 0x67, 
	0x32, 0x64, 
	0x32, 0x64, 
	0x62, 0x66, 
	0xF6, 0x27, 
	0x04, 0x34, 
	0x1C, 0x06, 
	0xF0, 0x03, 

	// @446 'A' (11 pixels wide)
	0x00, 0x08, 
	0x00, 0x0F, 
	0xE0, 0x0F, 
	0xFC, 0x03, 
	0x7F, 0x03, 
	0x07, 0x03, 
	0x3F, 0x03, 
	0xFE, 0x03, 
	0xF0, 0x0F, 
	0x80, 0x0F, 
	0x00, 0x0C, 

	// @468 'B' (9 pixels wide)
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0x63, 0x0C, 
	0x63, 0x0C, 
	0x67, 0x0C, 
	0xFE, 0x0F, 
	0xFE, 0x07, 
	0x88, 0x07, 

	// @486 'C' (9 pixels wide)
	0xF8, 0x03, 
	0xFC, 0x07, 
	0xFE, 0x0F, 
	0x07, 0x0E, 
	0x03, 0x0C, 
	0x03, 0x0C, 
	0x03, 0x0C, 
	0x07, 0x0C, 
	0x06, 0x06, 

	// @504 'D' (10 pixels wide)
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0x07, 0x0C, 
	0x07, 0x0C, 
	0x07, 0x0E, 
	0x06, 0x0E, 
	0xFE, 0x07, 
	0xFC, 0x07, 
	0xF8, 0x01, 

	// @524 'E' (8 pixels wide)
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0x67, 0x0C, 
	0x67, 0x0C, 
	0x67, 0x0C, 
	0x67, 0x0C, 
	0x07, 0x0C, 

	// @540 'F' (8 pixels wide)
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0x67, 0x00, 
	0x67, 0x00, 
	0x67, 0x00, 
	0x67, 0x00, 
	0x07, 0x00, 

	// @556 'G' (10 pixels wide)
	0xF8, 0x03, 
	0xFC, 0x07, 
	0xFE, 0x0F, 
	0x07, 0x0E, 
	0x07, 0x0C, 
	0x03, 0x0C, 
	0xC3, 0x0C, 
	0xC7, 0x0F, 
	0xC6, 0x0F, 
	0xC0, 0x07, 

	// @576 'H' (10 pixels wide)
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0x60, 0x00, 
	0x60, 0x00, 
	0x60, 0x00, 
	0x60, 0x00, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 

	// @596 'I' (3 pixels wide)
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 

	// @602 'J' (5 pixels wide)
	0x00, 0x60, 
	0x00, 0x60, 
	0xFF, 0x7F, 
	0xFF, 0x7F, 
	0xFF, 0x1F, 

	// @612 'K' (10 pixels wide)
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xF0, 0x00, 
	0xF8, 0x01, 
	0xDC, 0x03, 
	0x8E, 0x07, 
	0x07, 0x0E, 
	0x03, 0x0C, 
	0x01, 0x08, 

	// @632 'L' (8 pixels wide)
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0x00, 0x0C, 
	0x00, 0x0C, 
	0x00, 0x0C, 
	0x00, 0x0C, 
	0x00, 0x0C, 

	// @648 'M' (12 pixels wide)
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0x1F, 0x00, 
	0xFC, 0x00, 
	0xE0, 0x03, 
	0xC0, 0x03, 
	0xF8, 0x01, 
	0x3F, 0x00, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 

	// @672 'N' (10 pixels wide)
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0x1E, 0x00, 
	0x78, 0x00, 
	0xE0, 0x01, 
	0x80, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 

	// @692 'O' (11 pixels wide)
	0xF8, 0x03, 
	0xFE, 0x07, 
	0xFE, 0x0F, 
	0x07, 0x0E, 
	0x03, 0x0C, 
	0x03, 0x0C, 
	0x07, 0x0C, 
	0x0E, 0x0F, 
	0xFE, 0x07, 
	0xFC, 0x03, 
	0x40, 0x00, 

	// @714 'P' (9 pixels wide)
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xC7, 0x00, 
	0xC7, 0x00, 
	0xC7, 0x00, 
	0xFE, 0x00, 
	0x7E, 0x00, 
	0x3C, 0x00, 

	// @732 'Q' (11 pixels wide)
	0xF8, 0x03, 
	0xFE, 0x07, 
	0xFE, 0x0F, 
	0x07, 0x0E, 
	0x03, 0x0C, 
	0x03, 0x0C, 
	0x07, 0x3C, 
	0x0E, 0x3F, 
	0xFE, 0x27, 
	0xFC, 0x03, 
	0x40, 0x00, 

	// @754 'R' (10 pixels wide)
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xE7, 0x00, 
	0xE7, 0x00, 
	0xE7, 0x01, 
	0xFE, 0x07, 
	0xBE, 0x0F, 
	0x00, 0x0E, 
	0x00, 0x08, 

	// @774 'S' (8 pixels wide)
	0x3C, 0x0E, 
	0x7E, 0x0C, 
	0x77, 0x0C, 
	0x63, 0x0C, 
	0xE3, 0x0C, 
	0xE3, 0x0E, 
	0xE7, 0x0F, 
	0xC6, 0x07, 

	// @790 'T' (10 pixels wide)
	0x07, 0x00, 
	0x07, 0x00, 
	0x07, 0x00, 
	0x07, 0x00, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0x07, 0x00, 
	0x07, 0x00, 
	0x07, 0x00, 
	0x07, 0x00, 

	// @810 'U' (9 pixels wide)
	0xFF, 0x01, 
	0xFF, 0x07, 
	0xFF, 0x0F, 
	0x00, 0x0E, 
	0x00, 0x0C, 
	0x00, 0x0C, 
	0x00, 0x0E, 
	0xFF, 0x0F, 
	0xFF, 0x07, 

	// @828 'V' (11 pixels wide)
	0x03, 0x00, 
	0x1F, 0x00, 
	0xFF, 0x00, 
	0xF8, 0x07, 
	0xC0, 0x0F, 
	0x00, 0x0E, 
	0xC0, 0x0F, 
	0xF8, 0x07, 
	0xFF, 0x00, 
	0x1F, 0x00, 
	0x03, 0x00, 

	// @850 'W' (15 pixels wide)
	0x01, 0x00, 
	0x1F, 0x00, 
	0xFF, 0x03, 
	0xF8, 0x0F, 
	0x80, 0x0F, 
	0xC0, 0x0F, 
	0xFE, 0x03, 
	0x1F, 0x00, 
	0x3F, 0x00, 
	0xFC, 0x03, 
	0xC0, 0x0F, 
	0x80, 0x0F, 
	0xFC, 0x0F, 
	0xFF, 0x01, 
	0x1F, 0x00, 

	// @880 'X' (10 pixels wide)
	0x03, 0x0C, 
	0x0F, 0x0F, 
	0x9E, 0x07, 
	0xFC, 0x03, 
	0xF0, 0x00, 
	0xF8, 0x03, 
	0xBE, 0x07, 
	0x0F, 0x0F, 
	0x03, 0x0C, 
	0x01, 0x08, 

	// @900 'Y' (10 pixels wide)
	0x01, 0x00, 
	0x07, 0x00, 
	0x1F, 0x00, 
	0x3E, 0x00, 
	0xF8, 0x0F, 
	0xF0, 0x0F, 
	0xFC, 0x0F, 
	0x3E, 0x00, 
	0x0F, 0x00, 
	0x03, 0x00, 

	// @920 'Z' (9 pixels wide)
	0x07, 0x0E, 
	0x07, 0x0F, 
	0xC7, 0x0F, 
	0xE7, 0x0D, 
	0xF7, 0x0C, 
	0x3F, 0x0C, 
	0x1F, 0x0C, 
	0x0F, 0x0C, 
	0x03, 0x0C, 

	// @938 '[' (5 pixels wide)
	0xFF, 0x3F, 
	0xFF, 0x3F, 
	0xFF, 0x3F, 
	0x03, 0x30, 
	0x03, 0x30, 

	// @948 '\' (5 pixels wide)
	0x03, 0x00, 
	0x3F, 0x00, 
	0xF0, 0x01, 
	0x80, 0x1F, 
	0x00, 0x18, 

	// @958 ']' (4 pixels wide)
	0x03, 0x30, 
	0x03, 0x30, 
	0xFF, 0x3F, 
	0xFF, 0x3F, 

	// @966 '^' (8 pixels wide)
	0x18, 0x00, 
	0x0C, 0x00, 
	0x0E, 0x00, 
	0x07, 0x00, 
	0x07, 0x00, 
	0x0E, 0x00, 
	0x0C, 0x00, 
	0x18, 0x00, 

	// @982 '_' (7 pixels wide)
	0x00, 0xC0, 
	0x00, 0xC0, 
	0x00, 0xC0, 
	0x00, 0xC0, 
	0x00, 0xC0, 
	0x00, 0xC0, 
	0x00, 0xC0, 

	// @996 'a' (8 pixels wide)
	0xB8, 0x0F, 
	0x98, 0x0F, 
	0xD8, 0x0C, 
	0xD8, 0x0C, 
	0xD8, 0x04, 
	0xF8, 0x0F, 
	0xF0, 0x0F, 
	0xC0, 0x0F, 

	// @1012 'b' (9 pixels wide)
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0x10, 0x0C, 
	0x18, 0x0C, 
	0x38, 0x0C, 
	0xF8, 0x0F, 
	0xF0, 0x07, 
	0xC0, 0x01, 

	// @1030 'c' (7 pixels wide)
	0xE0, 0x07, 
	0xF0, 0x0F, 
	0x38, 0x0E, 
	0x18, 0x0C, 
	0x18, 0x0C, 
	0x18, 0x0C, 
	0x38, 0x0C, 

	// @1044 'd' (8 pixels wide)
	0xF0, 0x07, 
	0xF8, 0x0F, 
	0x38, 0x0E, 
	0x18, 0x0C, 
	0x18, 0x0C, 
	0x70, 0x06, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 

	// @1060 'e' (8 pixels wide)
	0xE0, 0x07, 
	0xF0, 0x0F, 
	0xB8, 0x0E, 
	0x98, 0x0C, 
	0x98, 0x0C, 
	0xF8, 0x0C, 
	0xF0, 0x0C, 
	0xE0, 0x0E, 

	// @1076 'f' (6 pixels wide)
	0x18, 0x00, 
	0x18, 0x00, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0x1B, 0x00, 
	0x1B, 0x00, 

	// @1088 'g' (8 pixels wide)
	0xF0, 0x07, 
	0xF8, 0x6F, 
	0x38, 0x4E, 
	0x18, 0x4C, 
	0x18, 0x6C, 
	0x70, 0x77, 
	0xF8, 0x7F, 
	0xF8, 0x3F, 

	// @1104 'h' (8 pixels wide)
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0x10, 0x00, 
	0x18, 0x00, 
	0x38, 0x00, 
	0xF8, 0x0F, 
	0xF0, 0x0F, 

	// @1120 'i' (3 pixels wide)
	0xFB, 0x0F, 
	0xFB, 0x0F, 
	0xFB, 0x0F, 

	// @1126 'j' (4 pixels wide)
	0x00, 0x40, 
	0xFB, 0x7F, 
	0xFB, 0x7F, 
	0xFB, 0x3F, 

	// @1134 'k' (8 pixels wide)
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xC0, 0x01, 
	0xF0, 0x03, 
	0x38, 0x0F, 
	0x18, 0x0E, 
	0x08, 0x0C, 

	// @1150 'l' (3 pixels wide)
	0xFF, 0x0F, 
	0xFF, 0x0F, 
	0xFF, 0x0F, 

	// @1156 'm' (13 pixels wide)
	0xF8, 0x0F, 
	0xF8, 0x0F, 
	0xF8, 0x0F, 
	0x10, 0x00, 
	0x18, 0x00, 
	0xF8, 0x0F, 
	0xF8, 0x0F, 
	0xE0, 0x0F, 
	0x10, 0x00, 
	0x18, 0x00, 
	0xF8, 0x0F, 
	0xF8, 0x0F, 
	0xE0, 0x0F, 

	// @1182 'n' (8 pixels wide)
	0xF8, 0x0F, 
	0xF8, 0x0F, 
	0xF8, 0x0F, 
	0x10, 0x00, 
	0x18, 0x00, 
	0x38, 0x00, 
	0xF8, 0x0F, 
	0xF0, 0x0F, 

	// @1198 'o' (8 pixels wide)
	0xE0, 0x07, 
	0xF0, 0x0F, 
	0x38, 0x0E, 
	0x18, 0x0C, 
	0x18, 0x0C, 
	0x38, 0x0E, 
	0xF0, 0x0F, 
	0xE0, 0x07, 

	// @1214 'p' (9 pixels wide)
	0xF8, 0x7F, 
	0xF8, 0x7F, 
	0xF8, 0x7F, 
	0x10, 0x0C, 
	0x18, 0x0C, 
	0x38, 0x0C, 
	0xF8, 0x0F, 
	0xF0, 0x07, 
	0xC0, 0x01, 

	// @1232 'q' (8 pixels wide)
	0xF0, 0x07, 
	0xF8, 0x0F, 
	0x38, 0x0E, 
	0x18, 0x0C, 
	0x18, 0x0C, 
	0x70, 0x06, 
	0xF8, 0x7F, 
	0xF8, 0x7F, 

	// @1248 'r' (6 pixels wide)
	0xF8, 0x0F, 
	0xF8, 0x0F, 
	0xF8, 0x0F, 
	0x30, 0x00, 
	0x18, 0x00, 
	0x18, 0x00, 

	// @1260 's' (7 pixels wide)
	0xF0, 0x0C, 
	0xF8, 0x0C, 
	0xD8, 0x0D, 
	0x98, 0x0D, 
	0x98, 0x0F, 
	0x98, 0x0F, 
	0x00, 0x07, 

	// @1274 't' (7 pixels wide)
	0x18, 0x00, 
	0xFE, 0x03, 
	0xFE, 0x0F, 
	0xFE, 0x0F, 
	0x18, 0x0C, 
	0x18, 0x0C, 
	0x18, 0x00, 

	// @1288 'u' (8 pixels wide)
	0xF8, 0x07, 
	0xF8, 0x0F, 
	0xF8, 0x0F, 
	0x00, 0x0C, 
	0x00, 0x0C, 
	0x00, 0x07, 
	0xF8, 0x0F, 
	0xF8, 0x0F, 

	// @1304 'v' (9 pixels wide)
	0x08, 0x00, 
	0x78, 0x00, 
	0xF8, 0x03, 
	0xC0, 0x0F, 
	0x00, 0x0E, 
	0x80, 0x0F, 
	0xF0, 0x07, 
	0xF8, 0x00, 
	0x18, 0x00, 

	// @1322 'w' (12 pixels wide)
	0x78, 0x00, 
	0xF8, 0x0F, 
	0xC0, 0x0F, 
	0x00, 0x0F, 
	0xF0, 0x07, 
	0x78, 0x00, 
	0xF8, 0x03, 
	0x80, 0x0F, 
	0x80, 0x0F, 
	0xF8, 0x0F, 
	0xF8, 0x01, 
	0x18, 0x00, 

	// @1346 'x' (8 pixels wide)
	0x18, 0x0C, 
	0x38, 0x0E, 
	0xF0, 0x07, 
	0xC0, 0x01, 
	0xF0, 0x07, 
	0x78, 0x0F, 
	0x18, 0x0C, 
	0x08, 0x08, 

	// @1362 'y' (9 pixels wide)
	0x08, 0x00, 
	0x78, 0x40, 
	0xF8, 0x41, 
	0xE0, 0x6F, 
	0x00, 0x7F, 
	0x80, 0x3F, 
	0xF0, 0x07, 
	0xF8, 0x00, 
	0x18, 0x00, 

	// @1380 'z' (7 pixels wide)
	0x18, 0x0E, 
	0x18, 0x0F, 
	0x98, 0x0F, 
	0xD8, 0x0D, 
	0xF8, 0x0C, 
	0x78, 0x0C, 
	0x18, 0x0C, 

	// @1394 '{' (6 pixels wide)
	0xC0, 0x00, 
	0xC0, 0x00, 
	0xFE, 0x3F, 
	0xFF, 0x3F, 
	0x03, 0x70, 
	0x03, 0x60, 

	// @1406 '|' (1 pixels wide)
	0xFF, 0xFF, 

	// @1408 '}' (6 pixels wide)
	0x03, 0x60, 
	0x03, 0x60, 
	0x7F, 0x3F, 
	0xFF, 0x3F, 
	0xC0, 0x01, 
	0xC0, 0x00, 

	// @1420 '~' (9 pixels wide)
	0xC0, 0x00, 
	0x40, 0x00, 
	0x40, 0x00, 
	0xC0, 0x00, 
	0xC0, 0x00, 
	0x80, 0x00, 
	0x80, 0x00, 
	0xC0, 0x00, 
	0x60, 0x00,  
};

const CharInfo font11x16Descr[]  = 
{
	{2, 0}, 		//   
	{3, 4}, 		// ! 
	{5, 10}, 		// " 
	{10, 20}, 		// # 
	{8, 40}, 		// $ 
	{14, 56}, 		// % 
	{11, 84}, 		// & 
	{2, 106}, 		// ' 
	{4, 110}, 		// ( 
	{4, 118}, 		// ) 
	{7, 126}, 		// * 
	{9, 140}, 		// + 
	{3, 158}, 		// , 
	{4, 164}, 		// - 
	{3, 172}, 		// . 
	{5, 178}, 		// / 
	{8, 188}, 		// 0 
	{7, 204}, 		// 1 
	{8, 218}, 		// 2 
	{8, 234}, 		// 3 
	{8, 250}, 		// 4 
	{8, 266}, 		// 5 
	{8, 282}, 		// 6 
	{8, 298}, 		// 7 
	{8, 314}, 		// 8 
	{8, 330}, 		// 9 
	{2, 346}, 		// : 
	{3, 350}, 		// ; 
	{9, 356}, 		// < 
	{9, 374}, 		// = 
	{9, 392}, 		// > 
	{6, 410}, 		// ? 
	{12, 422}, 		// @ 
	{11, 446}, 		// A 
	{9, 468}, 		// B 
	{9, 486}, 		// C 
	{10, 504}, 		// D 
	{8, 524}, 		// E 
	{8, 540}, 		// F 
	{10, 556}, 		// G 
	{10, 576}, 		// H 
	{3, 596}, 		// I 
	{5, 602}, 		// J 
	{10, 612}, 		// K 
	{8, 632}, 		// L 
	{12, 648}, 		// M 
	{10, 672}, 		// N 
	{11, 692}, 		// O 
	{9, 714}, 		// P 
	{11, 732}, 		// Q 
	{10, 754}, 		// R 
	{8, 774}, 		// S 
	{10, 790}, 		// T 
	{9, 810}, 		// U 
	{11, 828}, 		// V 
	{15, 850}, 		// W 
	{10, 880}, 		// X 
	{10, 900}, 		// Y 
	{9, 920}, 		// Z 
	{5, 938}, 		// [ 
	{5, 948}, 		// slash 
	{4, 958}, 		// ] 
	{8, 966}, 		// ^ 
	{7, 982}, 		// _ 
	{3, 158}, 		// ` 
	{8, 996}, 		// a 
	{9, 1012}, 		// b 
	{7, 1030}, 		// c 
	{8, 1044}, 		// d 
	{8, 1060}, 		// e 
	{6, 1076}, 		// f 
	{8, 1088}, 		// g 
	{8, 1104}, 		// h 
	{3, 1120}, 		// i 
	{4, 1126}, 		// j 
	{8, 1134}, 		// k 
	{3, 1150}, 		// l 
	{13, 1156}, 	// m 
	{8, 1182}, 		// n 
	{8, 1198}, 		// o 
	{9, 1214}, 		// p 
	{8, 1232}, 		// q 
	{6, 1248}, 		// r 
	{7, 1260}, 		// s 
	{7, 1274}, 		// t 
	{8, 1288}, 		// u 
	{9, 1304}, 		// v 
	{12, 1322}, 	// w 
	{8, 1346}, 		// x 
	{9, 1362}, 		// y 
	{7, 1380}, 		// z 
	{6, 1394}, 		// { 
	{1, 1406}, 		// | 
	{6, 1408}, 		// } 
	{9, 1420}, 		// ~ 
};

