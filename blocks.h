//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Swap:", "free -h | awk '/^Swap/ { print $3\"/\"$2 }' | sed s/i//g",     30,             0},

	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"Kernel:  ", "uname -r",                                       0,              0},

	{"",	"sb-volume",	0,	10},

	{"",    "sb-battery",   5,      3},

	{"", "date '+%I:%M%p %A - %b %d %Y'",					20,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
