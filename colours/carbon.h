/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    // normal
      "#172030",
      "#DB6E89",
      "#FFAE8F",
      "#F9B5AC",
      "#B87EA2",
      "#73A7A7",
      "#F2C4B3",
      "#C9CCCD",
    // bright
      "#465063",
      "#db6e89",
      "#ffa0a0",
    // the rest are the same as normal colours
      "#F9B5AC",
      "#B87EA2",
      "#73A7A7",
      "#F2C4B3",
      "#C9CCCD",

[256] = "#73A7A7", /* default foreground colour */
[257] = "#172030", /* default background colour */
[258] = "#73A7A7", /* default cursor */

};


/*
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 258;
static unsigned int defaultrcs = 258;

