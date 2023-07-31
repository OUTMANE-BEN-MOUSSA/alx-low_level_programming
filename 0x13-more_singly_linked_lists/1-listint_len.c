#include "lists.h"
#include <stdio.h>

/**
 * listint_len - This is a function that returns the number of elements in the list
 * @h: A pointer to listint_t structure
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodesNumber = 0;

	while (h)
	{
		h = h->next;
		nodesNumber++;
	}
	return (nodesNumber);
}
