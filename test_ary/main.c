#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dynamic_ary.h"

void parse_string(char *input, struct Ary * ary)
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

int main()
{
    struct Ary *ary = new_ary();
    parse_string("ls -a", ary);
    int i;
    for (i = 0; i < get_length_ary(ary); i++)
    {
        printf("Number %d: %s\n", (i + 1), (char *)(get_item_ary(ary, i)));
    }
    for (i = 0; i < get_length_ary(ary); i++)
    {
        free((char *)(get_item_ary(ary, i)));
    }
    delete_ary(ary);
    return 0;
}