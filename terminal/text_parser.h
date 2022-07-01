#ifndef TEXT_PARSER
#define TEXT_PARSER

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "dynamic_ary.h"

/*
 * Function: string_pareser
 *----------------------------
 * Parses a string into an array of strings.
 * Returns nothing.
 * char *input: the string to be parsed.
 * struct Ary *ary: the array to be referenced.
 */
void string_pareser(char *input, struct Ary *ary);

#endif
