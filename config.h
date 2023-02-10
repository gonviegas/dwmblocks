//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
/*Icon*/	   /*Command*/		        /*Update Interval*/  /*Update Signal*/
  {"", "dwmb-camera",                 3,              10},
  {"", "dwmb-mic",                    3,              7},
  {"", "dwmb-nettraf",                1,              25},
  {"", "dwmb-disks",                  60,             16},
  {"", "dwmb-memory",                 3,              13},
  // {"", "dwmb-cpu-gpu",                3,              19},
  {"", "dwmb-cpu-gpu.laptop",                3,              19},
  {"", "dwmb-volume",                 0,              5},
  // {"", "dwmb-monitor",                0,              6},
  {"", "dwmb-monitor.laptop",                0,              6},
  {"", "dwmb-updates",                900,            9},
  {"", "dwmb-power.laptop",                  60,             8},
  {"", "dwmb-datetime",               60,             4},
  {"", "dwmb-kblayout",               0,              1},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "  ";

/*
To reload block, run:
'kill $SIGNAL $(pidof dwmblocks)'

$SIGNAL = Update Signal + 34
*/
