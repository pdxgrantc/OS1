#include <stdlib.h>

#include "text_parser.h"
#include "dynamic_ary.h"

int main() {
    char *text = "Hello, world! this is a test for the function parse_string";
    struct Ary *ary = new_ary();
    string_pareser(text, ary);
    printf("Printing: \n");
    int i;
    for (i = 0; i < get_length_ary(ary); i++)
    {
        printf("Number %d: %s\n", (i + 1), (char*)(get_item_ary(ary, i)));
    }
    for (i = 0; i < get_length_ary(ary); i++)
    {
        free((char *)(get_item_ary(ary, i)));
    }
    delete_ary(ary);
    return 0;
}