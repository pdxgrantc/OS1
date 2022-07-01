#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h>

#include "dynamic_ary.h"
#include "commands.h"

void clear(struct Ary *command)
{
    system("@cls||clear");
}

void ls(struct Ary *command)
{
    DIR *d;
    struct dirent *dir;
    d = opendir(".");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            printf("%s ", dir->d_name);
        }
        printf("\n");
        closedir(d);
    }
}

void pwd(struct Ary *command, struct Current_dir *dir)
{
    printf("%s\n", dir->path);
}