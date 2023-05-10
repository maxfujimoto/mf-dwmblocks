/* modify this file to change what commands output to your statusbar, and recompile using the make command. */

static const Block blocks[] = {
    /* Icon         Command                 Interval    Signal */
    { "",              "sb-emacsdaemon",       60,         7       },
    /* { "",              "sb-weather",           60,         12      }, */
    { "",              "sb-internet",          60,         10      },
    { "",              "sb-battery",           60,         0       },
    { "",              "sb-ram",               60,         0       },
    { "",              "sb-volume",            0,          11      },
    { "",              "sb-datetime",          10,         0       },
};

/* sets delimeter between status commands. NULL character ('\0') means no delimeter. */
static char delim[] = "  ";
static unsigned int delimLen = 4;
