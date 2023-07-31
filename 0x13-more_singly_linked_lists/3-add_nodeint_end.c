#include "lists.h"

/**
 * add_nodeint_end - This function  adds a new node to the end of list
 * @head: A pointer to list structure
 * @n: An integer value to put into the new node
 * Return: The address of the new element, or NULL if failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp_node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	if (*head == NULL)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		node->next = NULL;
		temp_node = *head;
		while (temp_node->next)
			temp_node = temp_node->next;
		temp_node->next = node;
	}
	return (node);
}
