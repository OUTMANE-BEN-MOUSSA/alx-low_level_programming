#include "lists.h"

/**
 * free_listint2 - This function frees a list and sets head to NULL
 * @head: A pointer to listint_t structure
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head == NULL)
		return;

	temp_node = *head;
	while (*head)
	{
		temp_node = *head;
		(*head) = (*head)->next;
		free(temp_node);
	}
	*head = NULL;
}
