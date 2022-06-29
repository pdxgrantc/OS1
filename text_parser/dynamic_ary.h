#ifndef DYNAMIC_ARY
#define DYNAMIC_ARY

#include <stdio.h>

struct Ary {
    int length;
    void** ary;
};

struct Ary* new_ary();
void delete_ary(struct Ary* ary);
void push_front_ary(struct Ary* list, void * data);
void push_back_ary(struct Ary* list, void * data);
void insert_item_ary(struct Ary* list, int index, void * data);
void* get_item_ary(struct Ary* list, int index);
int get_length_ary(struct Ary* list);
void set_item_ary(struct Ary* list, int index, void * data);
void remove_item_ary(struct Ary* list, int index);

#endif
