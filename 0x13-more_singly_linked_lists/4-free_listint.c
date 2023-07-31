#include "lists.h"

/**
 * free_listint - This function frees a linked list
 * @head: A pointer to listint_t structure
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
	free(head);
}
