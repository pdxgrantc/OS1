#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "text_parser.h"
#include "dynamic_ary.h"

void driver();
int arg_parser(struct Ary *ary);
void ls(struct Ary *ary);

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
        cont = arg_parser(ary);
    }
}

int arg_parser(struct Ary *ary)
{
    char *text = (char *)(get_item_ary(ary, 0));
    char *str = malloc(4);
    strncpy(str, text, 4);
    if (strncmp(str, "exit", 4) == 0)
    {
        return 0;
    }
    else if (strncmp(str, "ls", 2) == 0) {
        ls(ary);
    }
    return 1;
    /*
    if (get_length_ary(ary) == 1) {
        single_arg(ary, cont);
    }
    else {
        multi_arg(ary, cont);
    }
    */
}

void ls(struct Ary *ary)
{
    printf("ls\n");
}