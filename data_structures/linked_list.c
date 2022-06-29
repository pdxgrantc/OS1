#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

// library helper functions
struct Node *default_node();

// Function deffinitions
struct List *new_list()
{
    struct List *list;
    list = malloc(sizeof(struct List));
    return list;
};

void delete_list(struct List *list)
{
    struct Node *node = list->head;
    struct Node *next;
    while (node != NULL)
    {
        next = node->next;
        free(node);
        node = next;
    }
    free(list);
}

void print_list(struct List *list)
{
    struct Node *n = list->head;
    int index = 0;
    while (n != NULL)
    {
        printf("Index: %d, value: %d\n", index, n->data);
        n = n->next;
        index++;
    }
}

void push_front_list(struct List *list, int data)
{
    struct Node *n = default_node();
    n->data = data;
    n->next = list->head;
    list->head = n;
    list->length++;
}

void push_back_list(struct List *list, int data)
{
    struct Node *n = default_node();
    n->data = data;
    n->next = NULL;
    if (list->head == NULL)
    {
        list->head = n;
    }
    else
    {
        struct Node *node = list->head;
        while (node->next != NULL)
        {
            node = node->next;
        }
        node->next = n;
    }
    list->length++;
}

void insert_node_list(struct List *list, int index, int data)
{
    if (index < 0 || index > list->length)
    {
        printf("Invalid index\n");
        return;
    }
    if (index == 0)
    {
        push_front_list(list, data);
        return;
    }
    if (index == list->length)
    {
        push_back_list(list, data);
        return;
    }
    struct Node *node = list->head;
    int i;
    for (i = 0; i < index - 1; i++)
    {
        node = node->next;
    }
    struct Node *n = default_node();
    n->data = data;
    n->next = node->next;
    node->next = n;
    list->length++;
}

void remove_node_list(struct List *list, int index)
{
    if (index < 0 || index >= list->length)
    {
        printf("Invalid index\n");
        return;
    }
    if (index == 0)
    {
        list->head = list->head->next;
        list->length--;
        return;
    }
    struct Node *node = list->head;
    int i;
    for (i = 0; i < index - 1; i++)
    {
        node = node->next;
    }
    node->next = node->next->next;
    list->length--;
}

int get_length_list(struct List *list)
{
    return list->length;
}

struct Node *default_node()
{
    struct Node *node = malloc(sizeof(struct Node));
    node->next = NULL;
    return node;
}
