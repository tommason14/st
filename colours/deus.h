 static const char *colorname[] = {
 	/* 8 normal colors */
        [0] = "#242a32",
        [1] = "#d54e53",
        [2] = "#98c379",
        [3] = "#e5c07b",
        [4] = "#83a598",
        [5] = "#c678dd",
        [6] = "#70c0ba",
        [7] = "#eaeaea",
        /* 8 bright colors */
        [8]  = "#666666",
        [9]  = "#ec3e45",
        [10] = "#90c966",
        [11] = "#edbf69",
        [12] = "#73ba9f",
        [13] = "#c858e9",
        [14] = "#2bcec2",
        [15] = "#ffffff",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#cccccc",
	"#555555",
	"#2c323b", /* default foreground colour */
	"black", /* default background colour */
};


unsigned int defaultfg = 15;
unsigned int defaultbg = 0;
unsigned int defaultcs = 15;
static unsigned int defaultrcs = 257;
