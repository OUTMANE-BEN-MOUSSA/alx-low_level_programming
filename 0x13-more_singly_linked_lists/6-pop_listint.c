#include "lists.h"

/**
 * pop_listint - This function deletes the head node of a list
 * and returns the head's data
 * @head: A pointer to listint_t structure.
 * Return: The head's data
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (data);
}
