#include "lists.h"
#include <string.h>

/**
 * add_node_end - This function adds a node to the end of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: string to add as node
 * Return: pointer to new element of list, NULL if failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp_node;
	unsigned int length = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	while (str[length])
		length++;

	node->len = length;
	node->str = strdup(str);
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
