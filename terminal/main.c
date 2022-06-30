#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "text_parser.h"
#include "dynamic_ary.h"

void driver();
int arg_parser(struct Ary *command);
void clear(struct Ary *command);
void ls(struct Ary *command);

struct Current_dir {
    char *path;
    struct Ary *path_names;
};

int main()
{
    driver();
    //struct Current_dir *dir = malloc(sizeof(struct Current_dir));
    return 0;
}

void driver()
{
    int cont = 1;
    char *text = malloc(sizeof(char) * 100);
    while (cont == 1)
    {
        printf("$ ");
        
        fgets(text, 100, stdin);
        struct Ary *command = new_ary();
        string_pareser(text, command);
        int i;
        cont = arg_parser(command);
        for (i=0; i<get_length_ary(command); i++)
        {
            free(get_item_ary(command, i));
        }
        delete_ary(command);
    }
    free(text);
}

int arg_parser(struct Ary *command)
{
    char *text = (char *)(get_item_ary(command, 0));
    char *str = malloc(strlen(text));
    strncpy(str, text, strlen(text));
    if (strncmp(str, "exit", 4) == 0)
    {
        return 0;
    }
    else if (strncmp(str, "clear", 5) == 0) {
        clear(command);
    }
    else if (strncmp(str, "ls", 2) == 0) {
        ls(command);
    }
    free(str);
    return 1;
}

void clear(struct Ary *command)
{
    system("@cls||clear");
}

void ls(struct Ary *command)
{
    printf("ls\n");
}