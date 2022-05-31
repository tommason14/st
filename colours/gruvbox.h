 static const char *colorname[] = {
 	/* 8 normal colors */
	"black",
	"red3",
	"green3",
	"yellow3",
	"blue2",
	"magenta3",
	"cyan3",
	"gray90",
	// [0] = "#282828", /* hard contrast: #1d2021 / soft contrast: #32302f */
	[0] = "#1d2021", 
	[1] = "#cc241d", /* red     */
	[2] = "#98971a", /* green   */
	[3] = "#d79921", /* yellow  */
	[4] = "#458588", /* blue    */
	[5] = "#b16286", /* magenta */
	[6] = "#689d6a", /* cyan    */
	[7] = "#a89984", /* white   */

	/* 8 bright colors */
	"gray50",
	"red",
	"green",
	"yellow",
	"#5c5cff",
	"magenta",
	"cyan",
	"white",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#cccccc",
	"#555555",
	"gray90", /* default foreground colour */
	"black", /* default background colour */
	[8]  = "#928374", /* black   */
	[9]  = "#fb4934", /* red     */
	[10] = "#b8bb26", /* green   */
	[11] = "#fabd2f", /* yellow  */
	[12] = "#83a598", /* blue    */
	[13] = "#d3869b", /* magenta */
	[14] = "#8ec07c", /* cyan    */
	[15] = "#ebdbb2", /* white   */
};


unsigned int defaultfg = 15;
unsigned int defaultbg = 0;
unsigned int defaultcs = 15;
static unsigned int defaultrcs = 257;
