#include <stdio.h>
#include <stdlib.h>
#include "dynamic_ary.h"

struct Ary* new_ary() {
    struct Ary* list = malloc(sizeof(struct Ary));
    list->length = 0;
    list->ary = malloc(sizeof(void*));
    return list;
}

void delete_ary(struct Ary* ary) {
    free(ary->ary);
    free(ary);
}

void push_front_ary(struct Ary* list, void * data) {
    list->length++;
    list->ary = realloc(list->ary, list->length * sizeof(void*));
    int i;
    for (i = list->length - 1; i > 0; i--) {
        list->ary[i] = list->ary[i - 1];
    }
    list->ary[0] = data;
}

void push_back_ary(struct Ary* list, void * data) {
    list->length++;
    list->ary = realloc(list->ary, list->length * sizeof(void*));
    list->ary[list->length - 1] = data;
}

void insert_item_ary(struct Ary* list, int index, void * data) {
    list->length++;
    list->ary = realloc(list->ary, list->length * sizeof(void*));
    int i;
    for (i = list->length - 1; i > index; i--) {
        list->ary[i] = list->ary[i - 1];
    }
    list->ary[index] = data;
}

void* get_item_ary(struct Ary* list, int index) {
    return list->ary[index];
}

int get_length_ary(struct Ary* list) {
    return list->length;
}

void set_item_ary(struct Ary* list, int index, void * data) {
    list->ary[index] = data;
}

void remove_item_ary(struct Ary* list, int index) {
    int i;
    for (i = index; i < list->length - 1; i++) {
        list->ary[i] = list->ary[i + 1];
    }
    list->length--;
    list->ary = realloc(list->ary, list->length * sizeof(void*));
}