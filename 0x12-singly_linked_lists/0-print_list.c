#include "lists.h"
#include <stdio.h>

/**
 * print_list - This function  prints a linked list
 * @h: pointer t  head of list
 * Return: This number of nodes in list as size_t
 */
size_t print_list(const list_t *h)
{
	unsigned int nodes_number = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		nodes_number++;
	}
	return (nodes_number);
}
