#include "lists.h"

/**
 * reverse_listint - This function reverses a linked list
 * @head: A pointer to listint_t structure
 * Return: A pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL, *nxt;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nxt;
	}
	*head = prv;
	return (*head);
}
