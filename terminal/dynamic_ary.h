#ifndef DYNAMIC_ARY
#define DYNAMIC_ARY

#include <stdio.h>

struct Ary
{
    int length;
    void **ary;
};

/*
 * Function: new_ary
 * ----------------------------
 *   Returns a heap pointer to a new array of length 0.
 */
struct Ary *new_ary();

/*
 *  Function: delete_ary
 * ----------------------------
 *  Returns nothing.
 *  ary: the array to be deleted.
 *  Frees the array poiner itself allocated to the array.
 */
void delete_ary(struct Ary *ary);

/*
 *  Function: push_front_ary
 * ----------------------------
 *  Returns nothing.
 *  array: the array to be referenced.
 *  data: the data to be added.
 *  Adds data to the front of the array.
 */
void push_front_ary(struct Ary *list, void *data);

/*
 *  Function: push_back_ary
 * ----------------------------
 *  Returns nothing.
 *  array: the array to be referenced.
 *  data: the data to be added.
 *  Adds data to the back of the array.
 */
void push_back_ary(struct Ary *list, void *data);

/*
 *  Function: pop_front_ary
 * ----------------------------
 *  Returns nothing.
 *  array: the array to be referenced.
 *  data: the data to be added.
 *  index: the index for the new piece of data.
 *  Inserts data into an index of the array
 */
void insert_item_ary(struct Ary *list, int index, void *data);

/*
 *  Function: pop_back_ary
 * ----------------------------
 *  Returns the data at the index.
 *  array: the array to be referenced.
 *  index: the index for the accessed piece of data.
 */
void *get_item_ary(struct Ary *list, int index);

/*
 *  Function: get_length_ary
 * ----------------------------
 *  Returns the length of the array.
 *  array: the array to be referenced.
 */
int get_length_ary(struct Ary *list);

/*
 *  Function: set_item_ary
 * ----------------------------
 *  Returns nothing.
 *  array: the array to be referenced.
 *  index: the index for the new piece of data.
 *  data: the data to be added.
 *  Sets the data at the index to the data given.
 */
void set_item_ary(struct Ary *list, int index, void *data);

/*
 *  Function: delete_item_ary
 * ----------------------------
 *  Returns nothing.
 *  array: the array to be referenced.
 *  index: the index for the data to be deleted.
 *  Deletes the data at the index.
 */
void delete_item_ary(struct Ary *list, int index);

#endif
