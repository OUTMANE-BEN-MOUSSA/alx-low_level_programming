#include "lists.h"
#include <stdio.h>

/**
 * print_listint - This function prints all the elements in a list
 * @h: A pointer to a list of int structure
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodesNumber = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodesNumber++;
	}
	return (nodesNumber);
}
