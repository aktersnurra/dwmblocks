// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"", "sb-pacpackages", 0, 8},
    {"", "sb-mailbox", 180, 12},
    {"󰢮 ", "sb-gpubar", 10, 18},
    {"󰍛 ", "sb-cpubars", 10, 18},
    {"", "sb-cpu-temp", 10, 18},
    {"󰧑 ", "sb-memory", 5, 4},
    {"", "sb-internet", 5, 4},
    {"", "sb-nettraf", 1, 16},
    {"", "sb-volume", 0, 10},
    {"", "sb-clock", 60, 1},
};

// Sets delimiter between status commands. NULL character ('\0') means no
// delimiter.
static char *delim = " ";
