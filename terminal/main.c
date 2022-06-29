#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "text_parser.h"
#include "dynamic_ary.h"

void driver();
void arg_parser(struct Ary *ary, int *cont);
void single_arg(struct Ary *ary, int *cont);
void multi_arg(struct Ary *ary, int *cont);

int main()
{
    driver();
    return 0;
}

void driver()
{
    int cont = 1;
    while (cont == 1)
    {
        printf("$ ");
        char *text = malloc(sizeof(char) * 100);
        fgets(text, 100, stdin);
        struct Ary *ary = new_ary();
        string_pareser(text, ary);
        int i;
        for (i = 0; i < get_length_ary(ary); i++)
        {
            //printf("Number %d: %s\n", (i + 1), (char *)(get_item_ary(ary, i)));
        }
        arg_parser(ary, &cont);
    }
}

void arg_parser(struct Ary *ary, int *cont)
{
    char *text = (char *)(get_item_ary(ary, 0));
    if ((text[0] == 101) || (text[1] == 120) || (text[2] == 105) || (text[3] == 116))
    {
        *cont = 0;
        printf("Exiting...\n");
    }
    /*
    if (get_length_ary(ary) == 1) {
        single_arg(ary, cont);
    }
    else {
        multi_arg(ary, cont);
    }
    */
}

void single_arg(struct Ary *ary, int *cont)
{
    if (get_item_ary(ary, 0) == "exit")
    {
        *cont = 0;
        printf("Exiting...\n");
    }
}

void multi_arg(struct Ary *ary, int *cont)
{
    return;
}