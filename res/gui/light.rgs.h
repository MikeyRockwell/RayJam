//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// StyleAsCode exporter v2.0 - Style data exported as a values array            //
//                                                                              //
// USAGE: On init call: GuiLoadStyleLight();                                   //
//                                                                              //
// more info and bugs-report:  github.com/raysan5/raygui                        //
// feedback and support:       ray[at]raylibtech.com                            //
//                                                                              //
// Copyright (c) 2020-2023 raylib technologies (@raylibtech)                    //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

#define LIGHT_STYLE_PROPS_COUNT  1

// Custom style name: Light
static const GuiStyleProp lightStyleProps[LIGHT_STYLE_PROPS_COUNT] = {
    { 0, 2, 0x838383ff },    // DEFAULT_TEXT_COLOR_NORMAL 
};

// WARNING: This style uses a custom font: "" (size: 10, spacing: 1)

#define LIGHT_STYLE_FONT_ATLAS_COMP_SIZE 103

// Font atlas image pixels data: DEFLATE compressed
static unsigned char lightFontData[LIGHT_STYLE_FONT_ATLAS_COMP_SIZE] = { 0xed,
    0xc3, 0x31, 0x0d, 0xc0, 0x20, 0x14, 0x05, 0xc0, 0x97, 0x74, 0xa9, 0x85, 0xaa, 0xa8, 0x25, 0xb4, 0xa1, 0x08, 0x33, 0x7f,
    0x86, 0x30, 0xa0, 0x82, 0xbb, 0xe4, 0x5a, 0x7f, 0xb3, 0x1f, 0xe3, 0x7f, 0xf2, 0x25, 0xa9, 0xaa, 0xa9, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xea,
    0x3d, 0x17 };

// Font glyphs rectangles data (on atlas)
static const Rectangle lightFontRecs[224] = {
    { 1, 1, 3 , 10 },
    { 5, 1, 1 , 10 },
    { 7, 1, 4 , 10 },
    { 12, 1, 6 , 10 },
    { 19, 1, 5 , 10 },
    { 25, 1, 7 , 10 },
    { 33, 1, 6 , 10 },
    { 40, 1, 2 , 10 },
    { 43, 1, 3 , 10 },
    { 47, 1, 3 , 10 },
    { 51, 1, 5 , 10 },
    { 57, 1, 5 , 10 },
    { 63, 1, 2 , 10 },
    { 66, 1, 4 , 10 },
    { 71, 1, 1 , 10 },
    { 73, 1, 7 , 10 },
    { 81, 1, 5 , 10 },
    { 87, 1, 2 , 10 },
    { 90, 1, 5 , 10 },
    { 96, 1, 5 , 10 },
    { 102, 1, 5 , 10 },
    { 108, 1, 5 , 10 },
    { 114, 1, 5 , 10 },
    { 120, 1, 5 , 10 },
    { 1, 12, 5 , 10 },
    { 7, 12, 5 , 10 },
    { 13, 12, 1 , 10 },
    { 15, 12, 1 , 10 },
    { 17, 12, 3 , 10 },
    { 21, 12, 4 , 10 },
    { 26, 12, 3 , 10 },
    { 30, 12, 6 , 10 },
    { 37, 12, 7 , 10 },
    { 45, 12, 6 , 10 },
    { 52, 12, 6 , 10 },
    { 59, 12, 6 , 10 },
    { 66, 12, 6 , 10 },
    { 73, 12, 6 , 10 },
    { 80, 12, 6 , 10 },
    { 87, 12, 6 , 10 },
    { 94, 12, 6 , 10 },
    { 101, 12, 3 , 10 },
    { 105, 12, 5 , 10 },
    { 111, 12, 6 , 10 },
    { 118, 12, 5 , 10 },
    { 1, 23, 7 , 10 },
    { 9, 23, 6 , 10 },
    { 16, 23, 6 , 10 },
    { 23, 23, 6 , 10 },
    { 30, 23, 6 , 10 },
    { 37, 23, 6 , 10 },
    { 44, 23, 6 , 10 },
    { 51, 23, 7 , 10 },
    { 59, 23, 6 , 10 },
    { 66, 23, 7 , 10 },
    { 74, 23, 7 , 10 },
    { 82, 23, 6 , 10 },
    { 89, 23, 6 , 10 },
    { 96, 23, 6 , 10 },
    { 103, 23, 2 , 10 },
    { 106, 23, 7 , 10 },
    { 114, 23, 2 , 10 },
    { 117, 23, 3 , 10 },
    { 121, 23, 5 , 10 },
    { 1, 34, 2 , 10 },
    { 4, 34, 5 , 10 },
    { 10, 34, 5 , 10 },
    { 16, 34, 5 , 10 },
    { 22, 34, 5 , 10 },
    { 28, 34, 5 , 10 },
    { 34, 34, 4 , 10 },
    { 39, 34, 5 , 10 },
    { 45, 34, 5 , 10 },
    { 51, 34, 1 , 10 },
    { 53, 34, 2 , 10 },
    { 56, 34, 5 , 10 },
    { 62, 34, 2 , 10 },
    { 65, 34, 5 , 10 },
    { 71, 34, 5 , 10 },
    { 77, 34, 5 , 10 },
    { 83, 34, 5 , 10 },
    { 89, 34, 5 , 10 },
    { 95, 34, 5 , 10 },
    { 101, 34, 5 , 10 },
    { 107, 34, 4 , 10 },
    { 112, 34, 5 , 10 },
    { 118, 34, 5 , 10 },
    { 1, 45, 5 , 10 },
    { 7, 45, 5 , 10 },
    { 13, 45, 5 , 10 },
    { 19, 45, 5 , 10 },
    { 25, 45, 3 , 10 },
    { 29, 45, 1 , 10 },
    { 31, 45, 3 , 10 },
    { 35, 45, 4 , 10 },
    { 40, 45, 4 , 10 },
    { 45, 45, 1 , 10 },
    { 47, 45, 1 , 10 },
    { 49, 45, 1 , 10 },
    { 51, 45, 1 , 10 },
    { 53, 45, 1 , 10 },
    { 55, 45, 1 , 10 },
    { 57, 45, 1 , 10 },
    { 59, 45, 1 , 10 },
    { 61, 45, 1 , 10 },
    { 63, 45, 1 , 10 },
    { 65, 45, 1 , 10 },
    { 67, 45, 1 , 10 },
    { 69, 45, 1 , 10 },
    { 71, 45, 1 , 10 },
    { 73, 45, 1 , 10 },
    { 75, 45, 1 , 10 },
    { 77, 45, 1 , 10 },
    { 79, 45, 1 , 10 },
    { 81, 45, 1 , 10 },
    { 83, 45, 1 , 10 },
    { 85, 45, 1 , 10 },
    { 87, 45, 1 , 10 },
    { 89, 45, 1 , 10 },
    { 91, 45, 1 , 10 },
    { 93, 45, 1 , 10 },
    { 95, 45, 1 , 10 },
    { 97, 45, 1 , 10 },
    { 99, 45, 1 , 10 },
    { 101, 45, 1 , 10 },
    { 103, 45, 1 , 10 },
    { 105, 45, 1 , 10 },
    { 107, 45, 1 , 10 },
    { 109, 45, 1 , 10 },
    { 111, 45, 1 , 10 },
    { 113, 45, 5 , 10 },
    { 119, 45, 5 , 10 },
    { 1, 56, 5 , 10 },
    { 7, 56, 7 , 10 },
    { 15, 56, 1 , 10 },
    { 17, 56, 5 , 10 },
    { 23, 56, 3 , 10 },
    { 27, 56, 7 , 10 },
    { 35, 56, 3 , 10 },
    { 39, 56, 5 , 10 },
    { 45, 56, 4 , 10 },
    { 50, 56, 1 , 10 },
    { 52, 56, 7 , 10 },
    { 60, 56, 4 , 10 },
    { 65, 56, 3 , 10 },
    { 69, 56, 5 , 10 },
    { 75, 56, 3 , 10 },
    { 79, 56, 3 , 10 },
    { 83, 56, 2 , 10 },
    { 86, 56, 5 , 10 },
    { 92, 56, 6 , 10 },
    { 99, 56, 1 , 10 },
    { 101, 56, 2 , 10 },
    { 104, 56, 2 , 10 },
    { 107, 56, 3 , 10 },
    { 111, 56, 5 , 10 },
    { 117, 56, 6 , 10 },
    { 1, 67, 6 , 10 },
    { 8, 67, 6 , 10 },
    { 15, 67, 6 , 10 },
    { 22, 67, 6 , 10 },
    { 29, 67, 6 , 10 },
    { 36, 67, 6 , 10 },
    { 43, 67, 6 , 10 },
    { 50, 67, 6 , 10 },
    { 57, 67, 6 , 10 },
    { 64, 67, 7 , 10 },
    { 72, 67, 6 , 10 },
    { 79, 67, 6 , 10 },
    { 86, 67, 6 , 10 },
    { 93, 67, 6 , 10 },
    { 100, 67, 6 , 10 },
    { 107, 67, 3 , 10 },
    { 111, 67, 3 , 10 },
    { 115, 67, 3 , 10 },
    { 119, 67, 3 , 10 },
    { 1, 78, 7 , 10 },
    { 9, 78, 6 , 10 },
    { 16, 78, 6 , 10 },
    { 23, 78, 6 , 10 },
    { 30, 78, 6 , 10 },
    { 37, 78, 6 , 10 },
    { 44, 78, 6 , 10 },
    { 51, 78, 5 , 10 },
    { 57, 78, 6 , 10 },
    { 64, 78, 6 , 10 },
    { 71, 78, 6 , 10 },
    { 78, 78, 6 , 10 },
    { 85, 78, 6 , 10 },
    { 92, 78, 6 , 10 },
    { 99, 78, 4 , 10 },
    { 104, 78, 6 , 10 },
    { 111, 78, 5 , 10 },
    { 117, 78, 5 , 10 },
    { 1, 89, 5 , 10 },
    { 7, 89, 5 , 10 },
    { 13, 89, 5 , 10 },
    { 19, 89, 5 , 10 },
    { 25, 89, 9 , 10 },
    { 35, 89, 5 , 10 },
    { 41, 89, 5 , 10 },
    { 47, 89, 5 , 10 },
    { 53, 89, 5 , 10 },
    { 59, 89, 5 , 10 },
    { 65, 89, 2 , 10 },
    { 68, 89, 2 , 10 },
    { 71, 89, 3 , 10 },
    { 75, 89, 3 , 10 },
    { 79, 89, 5 , 10 },
    { 85, 89, 5 , 10 },
    { 91, 89, 5 , 10 },
    { 97, 89, 5 , 10 },
    { 103, 89, 5 , 10 },
    { 109, 89, 5 , 10 },
    { 115, 89, 5 , 10 },
    { 121, 89, 5 , 10 },
    { 1, 100, 5 , 10 },
    { 7, 100, 5 , 10 },
    { 13, 100, 5 , 10 },
    { 19, 100, 5 , 10 },
    { 25, 100, 5 , 10 },
    { 31, 100, 5 , 10 },
    { 37, 100, 3 , 10 },
    { 41, 100, 5 , 10 },
};

// Font glyphs info data
// NOTE: No glyphs.image data provided
static const GlyphInfo lightFontGlyphs[224] = {
    { 32, 0, 0, 0, { 0 }},
    { 33, 0, 0, 0, { 0 }},
    { 34, 0, 0, 0, { 0 }},
    { 35, 0, 0, 0, { 0 }},
    { 36, 0, 0, 0, { 0 }},
    { 37, 0, 0, 0, { 0 }},
    { 38, 0, 0, 0, { 0 }},
    { 39, 0, 0, 0, { 0 }},
    { 40, 0, 0, 0, { 0 }},
    { 41, 0, 0, 0, { 0 }},
    { 42, 0, 0, 0, { 0 }},
    { 43, 0, 0, 0, { 0 }},
    { 44, 0, 0, 0, { 0 }},
    { 45, 0, 0, 0, { 0 }},
    { 46, 0, 0, 0, { 0 }},
    { 47, 0, 0, 0, { 0 }},
    { 48, 0, 0, 0, { 0 }},
    { 49, 0, 0, 0, { 0 }},
    { 50, 0, 0, 0, { 0 }},
    { 51, 0, 0, 0, { 0 }},
    { 52, 0, 0, 0, { 0 }},
    { 53, 0, 0, 0, { 0 }},
    { 54, 0, 0, 0, { 0 }},
    { 55, 0, 0, 0, { 0 }},
    { 56, 0, 0, 0, { 0 }},
    { 57, 0, 0, 0, { 0 }},
    { 58, 0, 0, 0, { 0 }},
    { 59, 0, 0, 0, { 0 }},
    { 60, 0, 0, 0, { 0 }},
    { 61, 0, 0, 0, { 0 }},
    { 62, 0, 0, 0, { 0 }},
    { 63, 0, 0, 0, { 0 }},
    { 64, 0, 0, 0, { 0 }},
    { 65, 0, 0, 0, { 0 }},
    { 66, 0, 0, 0, { 0 }},
    { 67, 0, 0, 0, { 0 }},
    { 68, 0, 0, 0, { 0 }},
    { 69, 0, 0, 0, { 0 }},
    { 70, 0, 0, 0, { 0 }},
    { 71, 0, 0, 0, { 0 }},
    { 72, 0, 0, 0, { 0 }},
    { 73, 0, 0, 0, { 0 }},
    { 74, 0, 0, 0, { 0 }},
    { 75, 0, 0, 0, { 0 }},
    { 76, 0, 0, 0, { 0 }},
    { 77, 0, 0, 0, { 0 }},
    { 78, 0, 0, 0, { 0 }},
    { 79, 0, 0, 0, { 0 }},
    { 80, 0, 0, 0, { 0 }},
    { 81, 0, 0, 0, { 0 }},
    { 82, 0, 0, 0, { 0 }},
    { 83, 0, 0, 0, { 0 }},
    { 84, 0, 0, 0, { 0 }},
    { 85, 0, 0, 0, { 0 }},
    { 86, 0, 0, 0, { 0 }},
    { 87, 0, 0, 0, { 0 }},
    { 88, 0, 0, 0, { 0 }},
    { 89, 0, 0, 0, { 0 }},
    { 90, 0, 0, 0, { 0 }},
    { 91, 0, 0, 0, { 0 }},
    { 92, 0, 0, 0, { 0 }},
    { 93, 0, 0, 0, { 0 }},
    { 94, 0, 0, 0, { 0 }},
    { 95, 0, 0, 0, { 0 }},
    { 96, 0, 0, 0, { 0 }},
    { 97, 0, 0, 0, { 0 }},
    { 98, 0, 0, 0, { 0 }},
    { 99, 0, 0, 0, { 0 }},
    { 100, 0, 0, 0, { 0 }},
    { 101, 0, 0, 0, { 0 }},
    { 102, 0, 0, 0, { 0 }},
    { 103, 0, 0, 0, { 0 }},
    { 104, 0, 0, 0, { 0 }},
    { 105, 0, 0, 0, { 0 }},
    { 106, 0, 0, 0, { 0 }},
    { 107, 0, 0, 0, { 0 }},
    { 108, 0, 0, 0, { 0 }},
    { 109, 0, 0, 0, { 0 }},
    { 110, 0, 0, 0, { 0 }},
    { 111, 0, 0, 0, { 0 }},
    { 112, 0, 0, 0, { 0 }},
    { 113, 0, 0, 0, { 0 }},
    { 114, 0, 0, 0, { 0 }},
    { 115, 0, 0, 0, { 0 }},
    { 116, 0, 0, 0, { 0 }},
    { 117, 0, 0, 0, { 0 }},
    { 118, 0, 0, 0, { 0 }},
    { 119, 0, 0, 0, { 0 }},
    { 120, 0, 0, 0, { 0 }},
    { 121, 0, 0, 0, { 0 }},
    { 122, 0, 0, 0, { 0 }},
    { 123, 0, 0, 0, { 0 }},
    { 124, 0, 0, 0, { 0 }},
    { 125, 0, 0, 0, { 0 }},
    { 126, 0, 0, 0, { 0 }},
    { 127, 0, 0, 0, { 0 }},
    { 128, 0, 0, 0, { 0 }},
    { 129, 0, 0, 0, { 0 }},
    { 130, 0, 0, 0, { 0 }},
    { 131, 0, 0, 0, { 0 }},
    { 132, 0, 0, 0, { 0 }},
    { 133, 0, 0, 0, { 0 }},
    { 134, 0, 0, 0, { 0 }},
    { 135, 0, 0, 0, { 0 }},
    { 136, 0, 0, 0, { 0 }},
    { 137, 0, 0, 0, { 0 }},
    { 138, 0, 0, 0, { 0 }},
    { 139, 0, 0, 0, { 0 }},
    { 140, 0, 0, 0, { 0 }},
    { 141, 0, 0, 0, { 0 }},
    { 142, 0, 0, 0, { 0 }},
    { 143, 0, 0, 0, { 0 }},
    { 144, 0, 0, 0, { 0 }},
    { 145, 0, 0, 0, { 0 }},
    { 146, 0, 0, 0, { 0 }},
    { 147, 0, 0, 0, { 0 }},
    { 148, 0, 0, 0, { 0 }},
    { 149, 0, 0, 0, { 0 }},
    { 150, 0, 0, 0, { 0 }},
    { 151, 0, 0, 0, { 0 }},
    { 152, 0, 0, 0, { 0 }},
    { 153, 0, 0, 0, { 0 }},
    { 154, 0, 0, 0, { 0 }},
    { 155, 0, 0, 0, { 0 }},
    { 156, 0, 0, 0, { 0 }},
    { 157, 0, 0, 0, { 0 }},
    { 158, 0, 0, 0, { 0 }},
    { 159, 0, 0, 0, { 0 }},
    { 160, 0, 0, 0, { 0 }},
    { 161, 0, 0, 0, { 0 }},
    { 162, 0, 0, 0, { 0 }},
    { 163, 0, 0, 0, { 0 }},
    { 164, 0, 0, 0, { 0 }},
    { 165, 0, 0, 0, { 0 }},
    { 166, 0, 0, 0, { 0 }},
    { 167, 0, 0, 0, { 0 }},
    { 168, 0, 0, 0, { 0 }},
    { 169, 0, 0, 0, { 0 }},
    { 170, 0, 0, 0, { 0 }},
    { 171, 0, 0, 0, { 0 }},
    { 172, 0, 0, 0, { 0 }},
    { 173, 0, 0, 0, { 0 }},
    { 174, 0, 0, 0, { 0 }},
    { 175, 0, 0, 0, { 0 }},
    { 176, 0, 0, 0, { 0 }},
    { 177, 0, 0, 0, { 0 }},
    { 178, 0, 0, 0, { 0 }},
    { 179, 0, 0, 0, { 0 }},
    { 180, 0, 0, 0, { 0 }},
    { 181, 0, 0, 0, { 0 }},
    { 182, 0, 0, 0, { 0 }},
    { 183, 0, 0, 0, { 0 }},
    { 184, 0, 0, 0, { 0 }},
    { 185, 0, 0, 0, { 0 }},
    { 186, 0, 0, 0, { 0 }},
    { 187, 0, 0, 0, { 0 }},
    { 188, 0, 0, 0, { 0 }},
    { 189, 0, 0, 0, { 0 }},
    { 190, 0, 0, 0, { 0 }},
    { 191, 0, 0, 0, { 0 }},
    { 192, 0, 0, 0, { 0 }},
    { 193, 0, 0, 0, { 0 }},
    { 194, 0, 0, 0, { 0 }},
    { 195, 0, 0, 0, { 0 }},
    { 196, 0, 0, 0, { 0 }},
    { 197, 0, 0, 0, { 0 }},
    { 198, 0, 0, 0, { 0 }},
    { 199, 0, 0, 0, { 0 }},
    { 200, 0, 0, 0, { 0 }},
    { 201, 0, 0, 0, { 0 }},
    { 202, 0, 0, 0, { 0 }},
    { 203, 0, 0, 0, { 0 }},
    { 204, 0, 0, 0, { 0 }},
    { 205, 0, 0, 0, { 0 }},
    { 206, 0, 0, 0, { 0 }},
    { 207, 0, 0, 0, { 0 }},
    { 208, 0, 0, 0, { 0 }},
    { 209, 0, 0, 0, { 0 }},
    { 210, 0, 0, 0, { 0 }},
    { 211, 0, 0, 0, { 0 }},
    { 212, 0, 0, 0, { 0 }},
    { 213, 0, 0, 0, { 0 }},
    { 214, 0, 0, 0, { 0 }},
    { 215, 0, 0, 0, { 0 }},
    { 216, 0, 0, 0, { 0 }},
    { 217, 0, 0, 0, { 0 }},
    { 218, 0, 0, 0, { 0 }},
    { 219, 0, 0, 0, { 0 }},
    { 220, 0, 0, 0, { 0 }},
    { 221, 0, 0, 0, { 0 }},
    { 222, 0, 0, 0, { 0 }},
    { 223, 0, 0, 0, { 0 }},
    { 224, 0, 0, 0, { 0 }},
    { 225, 0, 0, 0, { 0 }},
    { 226, 0, 0, 0, { 0 }},
    { 227, 0, 0, 0, { 0 }},
    { 228, 0, 0, 0, { 0 }},
    { 229, 0, 0, 0, { 0 }},
    { 230, 0, 0, 0, { 0 }},
    { 231, 0, 0, 0, { 0 }},
    { 232, 0, 0, 0, { 0 }},
    { 233, 0, 0, 0, { 0 }},
    { 234, 0, 0, 0, { 0 }},
    { 235, 0, 0, 0, { 0 }},
    { 236, 0, 0, 0, { 0 }},
    { 237, 0, 0, 0, { 0 }},
    { 238, 0, 0, 0, { 0 }},
    { 239, 0, 0, 0, { 0 }},
    { 240, 0, 0, 0, { 0 }},
    { 241, 0, 0, 0, { 0 }},
    { 242, 0, 0, 0, { 0 }},
    { 243, 0, 0, 0, { 0 }},
    { 244, 0, 0, 0, { 0 }},
    { 245, 0, 0, 0, { 0 }},
    { 246, 0, 0, 0, { 0 }},
    { 247, 0, 0, 0, { 0 }},
    { 248, 0, 0, 0, { 0 }},
    { 249, 0, 0, 0, { 0 }},
    { 250, 0, 0, 0, { 0 }},
    { 251, 0, 0, 0, { 0 }},
    { 252, 0, 0, 0, { 0 }},
    { 253, 0, 0, 0, { 0 }},
    { 254, 0, 0, 0, { 0 }},
    { 255, 0, 0, 0, { 0 }},
};

// Style loading function: Light
static void GuiLoadStyleLight(void)
{
    // Load style properties provided
    // NOTE: Default properties are propagated
    for (int i = 0; i < LIGHT_STYLE_PROPS_COUNT; i++)
    {
        GuiSetStyle(lightStyleProps[i].controlId, lightStyleProps[i].propertyId, lightStyleProps[i].propertyValue);
    }

    // Custom font loading
    // NOTE: Compressed font image data (DEFLATE), it requires DecompressData() function
    int lightFontDataSize = 0;
    unsigned char *data = DecompressData(lightFontData, LIGHT_STYLE_FONT_ATLAS_COMP_SIZE, &lightFontDataSize);
    Image imFont = { data, 128, 128, 1, 7 };

    Font font = { 0 };
    font.baseSize = 10;
    font.glyphCount = 224;

    // Load texture from image
    font.texture = LoadTextureFromImage(imFont);
    UnloadImage(imFont);  // Uncompressed image data can be unloaded from memory

    // Copy char recs data from global fontRecs
    // NOTE: Required to avoid issues if trying to free font
    font.recs = (Rectangle *)RAYGUI_MALLOC(font.glyphCount*sizeof(Rectangle));
    memcpy(font.recs, lightFontRecs, font.glyphCount*sizeof(Rectangle));

    // Copy font char info data from global fontChars
    // NOTE: Required to avoid issues if trying to free font
    font.glyphs = (GlyphInfo *)RAYGUI_MALLOC(font.glyphCount*sizeof(GlyphInfo));
    memcpy(font.glyphs, lightFontGlyphs, font.glyphCount*sizeof(GlyphInfo));

    GuiSetFont(font);

    // Setup a white rectangle on the font to be used on shapes drawing,
    // it makes possible to draw shapes and text (full UI) in a single draw call
    Rectangle fontWhiteRec = { 41, 46, 2, 8 };
    SetShapesTexture(font.texture, fontWhiteRec);

    //-----------------------------------------------------------------

    // TODO: Custom user style setup: Set specific properties here (if required)
    // i.e. Controls specific BORDER_WIDTH, TEXT_PADDING, TEXT_ALIGNMENT
}
