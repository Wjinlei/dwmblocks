//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"",		"dwm.getNetTraf.sh",		1,			16},
	{"",		"dwm.getMusic.sh",			0,			11},
	{"",		"dwm.getMail.sh",			0,			12},
    {"",		"dwm.getCpu.sh",			10,			13},
    {"",		"dwm.getMemory.sh",		    10,			14},
    {"",		"dwm.getDisk.sh",			10,			15},
	{"",		"dwm.getVolume.sh",			0,			10},
	{"",		"dwm.getBattery.sh",		5,			3},
	{"",		"dwm.getInternet.sh",		5,			4},
	{"",		"dwm.getClock.sh",			0,			1},
    {"",		"dwm.getWeather.sh",		18000,		5},
    {"",		"dwm.getMoonPhase.sh",		18000,		17},
	{"",		"dwm.getPackages.sh",		0,			8},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = ",";
