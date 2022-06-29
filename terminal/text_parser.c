#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dynamic_ary.h"

void string_pareser(char *input, struct Ary *ary)
{
    int i, first = 0, second;
    int found = 0;
    for (i = 0; i < strlen(input); i++)
    {
        if ((found == 0) && (!((input[i] == ' ') || (input[i] == '\t'))))
        {
            found = 1;
            first = i;
        }
        if (found == 1)
        {
            if ((input[i] == ' ') || (input[i] == '\t'))
            {
                second = i;
                char *str = malloc(second - first + 1);
                strncpy(str, input + first, second - first);
                str[second - first] = '\0';
                push_back_ary(ary, str);
                first = second + 1;
            }
        }
    }
    if (found == 1)
    {
        second = i;
        char *str = malloc(second - first + 1);
        strncpy(str, input + first, second - first);
        str[second - first] = '\0';
        push_back_ary(ary, str);
    }
}