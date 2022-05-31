/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    // normal
      "#161821",
      "#e27878",
      "#b4be82",
      "#e2a478",
      "#84a0c6",
      "#a093c7",
      "#89b8c2",
      "#c6c8d1",
    // bright
      "#6b7089",
      "#e98989",
      "#c0ca8e",
      "#e9b189",
      "#91acd1",
      "#ada0d3",
      "#95c4ce",
      "#d2d4de",

[256] = "#d2d4de", /* default foreground colour */
[257] = "#161821", /* default background colour */
[258] = "#e8e9ec", /* default cursor */ 

};


/*
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 258;
static unsigned int defaultrcs = 258;

