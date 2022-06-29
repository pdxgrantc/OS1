#include <stdio.h>
#include "linked_list.h"
#include "dynamic_ary.h"

void linked_list_driver() {
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

void dynamic_ary_driver() {
	printf("Dynamic Array Driver\n");
	struct Ary *ary = new_ary();

	int i;

	for (i = 0; i < 5; i++)
	{
		push_front_ary(ary, i);
	}
	print_ary(ary);
	delete_ary(ary);
}

int main()
{
	printf("Hello, World!\n");
	//linked_list_driver();
	dynamic_ary_driver();
	return 0;
}
