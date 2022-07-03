#ifndef COMMANDS
#define COMMANDS

#include "dynamic_ary.h"

/*
 * Struct: Current_dir
 * ---------------------------
 * Stores the current directory.
 * char *path: the path to the current directory.
 * struct Ary *path_names: the differnce from the original path.
 */
struct Current_dir
{
    char *path;
    struct Ary *path_names;
};

/*
 * Function: clear
 * ---------------------------
 * Clears the command line.
 * Returns nothing.
 * Takes no arguments.
 */
void clear();

/*
 * Function: ls
 * ---------------------------
 * Lists the contents of the current directory.
 * Returns nothing.
 * Takes no arguments.
 */
void ls();

/*
 * Function: pwd
 * ---------------------------
 * Prints the current directory.
 * Returns nothing.
 * struct Current_dir *dir: storing working directory.
 */
void pwd(struct Current_dir *dir);

/*
 * Function: help
 * ---------------------------
 *  Prints the help.txt file in the directory helper_files.
 *  Returns nothing.
 *  Takes no arguments.
 */
void help();

#endif
