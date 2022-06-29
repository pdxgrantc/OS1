#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#include "dynamic_ary.h"

void linked_list_driver()
{
	printf("Linked List Driver\n");
	struct List *list = new_list();
	int i;
	for (i = 0; i < 4; i++)
	{
		push_front_list(list, i);
	}
	print_list(list);
	delete_list(list);
}

void dynamic_ary_driver()
{
	printf("Dynamic Array Driver\n");
	struct Ary *ary = new_ary();
	int i;
	for (i = 0; i < 5; i++)
	{
		int *x = malloc(sizeof(int));
		*x = i;
		push_front_ary(ary, x);
	}
	for (size_t i = 0; i < get_length_ary(ary); i++)
	{
		printf("%d\n", *(int *)get_item_ary(ary, i));
		free(get_item_ary(ary, i));
	}

	delete_ary(ary);
}

int main()
{
	printf("Hello, World!\n");
	// linked_list_driver();
	dynamic_ary_driver();
	return 0;
}
