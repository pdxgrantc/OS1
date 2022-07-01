#ifndef COMMANDS
#define COMMANDS

#include "dynamic_ary.h"

struct Current_dir {
    char *path;
    struct Ary *path_names;
};

void clear(struct Ary *command);
void ls(struct Ary *command);
void pwd(struct Ary *command, struct Current_dir *dir);

#endif