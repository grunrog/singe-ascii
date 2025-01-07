#ifndef SINGE_ASCII_H
#define SINGE_ASCII_H

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define ORANGE "\033[38;5;214m"
#define WHITE "\033[37m"
#define BROWN "\033[38;5;94m"
#define GREY "\033[90m"

#define SINGE_ASCII BOLD ORANGE "    ,-‾‾‾‾-,\n" \
                    "   / " WHITE "_----_ " ORANGE "\\\n" \
                    BROWN " _" ORANGE "|" WHITE "/" BROWN ",-‾‾‾‾-," WHITE "\\" ORANGE "|" BROWN "_\n" \
                    " \\" ORANGE "|" WHITE "|" BROWN "|" GREY "o" BROWN ".--." GREY "o" BROWN "|" WHITE "|" ORANGE "|" BROWN "/\n" \
                    ORANGE "  \\" WHITE "\\" ORANGE "" BROWN "\\| " GREY "|| " BROWN "|/" WHITE "/" ORANGE "/\n" \
                    "   \\" WHITE "\\" ORANGE "_" BROWN "`--`" ORANGE "_" WHITE "/" ORANGE "/\n" \
                    "   /        \\\n" \
                    "  |          |\n" RESET

#endif
