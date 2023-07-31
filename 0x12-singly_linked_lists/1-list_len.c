#include "lists.h"

/**
 * list_len - This function gets the number of nodes of linked list
 * @h: head of linked list
 * Return: The number of nodes as size_t
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes_number = 0;

	while (h)
	{
		nodes_number++;
		h = h->next;
	}
	return (nodes_number);
}
