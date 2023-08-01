#include "lists.h"

/**
 * find_listint_loop - This function finds the loop in a list
 * @head: A pointer to listint_t structure
 * Return: The address of node where the loop start or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node1 = head, *node2 = head;

	while (node1 && node2 && node2->next)
	{
		node1 = node1->next;
		node2 = node2->next->next;
		if (node1 == node2)
		{
			return (node1);
		}
	}
	return (NULL);
}
