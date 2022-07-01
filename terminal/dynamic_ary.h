#ifndef DYNAMIC_ARY
#define DYNAMIC_ARY

#include <stdio.h>

/*
 * Struct: Ary
 * ---------------------------
 * Stores an array of void pointers.
 * int length: the size of the array.
 * void **ary: the array of void pointers.
 */
struct Ary
{
    int length;
    void **ary;
};

/*
 * Function: new_ary
 * ---------------------------
 * Creates a new array.
 * Returns ary: a pointer to the new array.
 * Takes no arguments.
 */
struct Ary *new_ary();

/*
 * Function: delete_ary
 * ---------------------------
 * Frees the memory allocated to an array.
 * Returns nothing.
 * struct Ary *ary: the array to be referenced.
 */
void delete_ary(struct Ary *ary);

/*
 * Function: push_front_ary
 * ---------------------------
 * Adds an item to the front of the array.
 * Returns nothing.
 * struct Ary *ary: the array to be referenced.
 * void *data: the data to be added.
 */
void push_front_ary(struct Ary *ary, void *data);

/*
 * Function: push_back_ary
 * ---------------------------
 * Adds an item to the back of the array.
 * struct Ary *ary: the array to be referenced.
 * void *data: the data to be added.
 * Adds data to the back of the array.
 */
void push_back_ary(struct Ary *list, void *data);

/*
 * Function: pop_front_ary
 * ---------------------------
 * Inserts an item to the array at an index.
 * Returns nothing.
 * struct Ary *ary: the array to be referenced.
 * int index: the index to insert the data at.
 * void *data: the data to be added.
 */
void insert_item_ary(struct Ary *list, int index, void *data);

/*
 * Function: get_item_ary
 * ---------------------------
 * Gets the item at an index.
 * Returns the void pointer to data at the index provided.
 * struct Ary *ary: the array to be referenced.
 * int index: the index to insert the data at.
 */
void *get_item_ary(struct Ary *list, int index);

/*
 * Function: get_length_ary
 * ---------------------------
 * Gets the length of the array.
 * Returns int.
 * struct Ary *ary: the array to be referenced.
 */
int get_length_ary(struct Ary *list);

/*
 * Function: set_item_ary
 * ---------------------------
 * Sets the item at an index.
 * Returns nothing.
 * struct Ary *ary: the array to be referenced.
 * int index: the index to insert the data at.
 * void *data: the data to be added.
 */
void set_item_ary(struct Ary *list, int index, void *data);

/*
 * Function: delete_item_ary
 * ---------------------------
 * Deletes the item at an index.
 * Returns nothing.
 * struct Ary *ary: the array to be referenced.
 * int index: the index to insert the data at.
 */
void delete_item_ary(struct Ary *list, int index);

#endif
