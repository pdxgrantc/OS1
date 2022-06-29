#ifndef LINKED_LIST
#define LINKED_LIST

#include <stdio.h>

struct List {
    int length;
    struct Node* head;
};

struct Node {
    int data;
    struct Node* next;
};

struct List* new_list();
void delete_list(struct List*);
void print_list(struct List* list);
void push_front_list(struct List* list, int data);
void push_back_list(struct List* list, int data);
void insert_node_list(struct List* list, int index, int data);
void remove_node_list(struct List* list, int index);
int get_length_list(struct List* list);

#endif
