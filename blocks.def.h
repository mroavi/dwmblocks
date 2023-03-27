//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/  /*Command*/               /*Update Interval*/ /*Update Signal*/
  {"",      "sb-date",                5,                  0},
  {"",      "sb-cpu",                 10,                 1},
  {"",      "sb-memory",              10,                 2},
  {"",      "sb-hdd",                 10,                 3},
  {"",      "sb-battery",             30,                 4},
  {"",      "sb-volume",              0,                  10},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
