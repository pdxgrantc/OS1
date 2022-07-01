#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "dynamic_ary.h"
#include "commands.h"

void clear(struct Ary *command)
{
    system("@cls||clear");
}

void ls(struct Ary *command)
{
    printf("ls\n");
}
