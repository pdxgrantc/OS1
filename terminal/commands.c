#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h>
//#include <conio.h>

#include "dynamic_ary.h"
#include "commands.h"

void clear()
{
    system("@cls||clear");
}

void ls()
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

void pwd(struct Current_dir *dir)
{
    printf("%s\n", dir->path);
}

void help()
{
    int c;
    FILE *file;
    file = fopen("./helper_files/help.txt", "r");
    if (file) {
        while ((c = getc(file)) != EOF)
            putchar(c);
        fclose(file);
    }
    printf("\n");
}
