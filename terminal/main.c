#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "text_parser.h"
#include "dynamic_ary.h"
#include "commands.h"

void driver();
int arg_parser(struct Ary *command, struct Current_dir *dir);
void setup_driver(struct Current_dir *dir);
void remove_driver(char *text, struct Current_dir *dir);

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
    struct Current_dir *dir = malloc(sizeof(struct Current_dir));
    setup_driver(dir);
    while (cont == 1)
    {
        printf("$ ");
        
        fgets(text, 100, stdin);
        struct Ary *command = new_ary();
        string_pareser(text, command);
        int i;
        cont = arg_parser(command, dir);
        for (i=0; i<get_length_ary(command); i++)
        {
            free(get_item_ary(command, i));
        }
        delete_ary(command);
    }
    remove_driver(text, dir);
}

int arg_parser(struct Ary *command, struct Current_dir *dir)
{
    char *text = (char *)(get_item_ary(command, 0));
    char *str = malloc(strlen(text));
    strncpy(str, text, strlen(text));
    if (strncmp(str, "exit", 4) == 0)
    {
        free(str);
        return 0;
    }
    else if (strncmp(str, "clear", 5) == 0) {
        clear(command);
    }
    else if (strncmp(str, "ls", 2) == 0) {
        ls(command);
    }
    else if (strncmp(str, "pwd", 3) == 0) {
        pwd(dir);
    }
    else {
        printf("Unknown command\n");
    }
    free(str);
    return 1;
}

void setup_driver(struct Current_dir *dir)
{
    dir->path = malloc(sizeof(char) * 100);
    dir->path_names = new_ary();
    dir->path = getcwd(dir->path, 100);
    char *str = malloc(sizeof(char) * 100);
    strncpy(str, dir->path, strlen(dir->path));
    push_back_ary(dir->path_names, str);
    free(str);
}

void remove_driver(char *text, struct Current_dir *dir)
{
    free(text);
    free(dir->path);
    delete_ary(dir->path_names);
    free(dir);
}
