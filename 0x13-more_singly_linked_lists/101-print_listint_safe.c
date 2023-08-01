#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - This function prints the elements of list
 * @head: A pointer to listint_t structure
 * Return: The number of nodes or exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes_number = 0;
	const listint_t *node1 = head, *node2 = head;

	if (head == NULL)
		exit(98);

	while (node1 && node2 && node2->next && head)
	{
		node1 = node1->next;
		node2 = node2->next->next;
		if (node1 == node2)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes_number++;
	}
	head = NULL;
	return (nodes_number);
}
