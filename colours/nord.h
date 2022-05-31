/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    // normal
    "#3B4252",
    "#BF616A",
    "#A3BE8C",
    "#EBCB8B",
    "#81A1C1",
    "#B48EAD",
    "#88C0D0",
    "#E5E9F0",
    // bright
    "#4C566A",
    "#BF616A",
    "#A3BE8C",
    "#EBCB8B",
    "#81A1C1",
    "#B48EAD",
    "#8FBCBB",
    "#ECEFF4",


[256] = "#D8DEE9", /* default foreground colour */
[257] = "#2E3440", /* default background colour */
[258] = "#C3BAC6", /* default cursor */

};


/*
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 258;
static unsigned int defaultrcs = 258;

