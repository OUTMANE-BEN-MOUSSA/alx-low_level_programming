#include "lists.h"
#include <string.h>

/**
 * add_nodeint - This function  adds a new nod at the begining of a list
 * @head: A pointer to list_t structure
 * @n: An integer value to put into the new node
 * Return: the address of the new element or NULL if failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = node;
	return (*head);
}
