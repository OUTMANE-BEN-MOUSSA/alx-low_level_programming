#include "lists.h"
#include <string.h>

/**
 * add_node - This function  adds a node to the head of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list, NULL if failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp_node;
	int length = 0;

	temp_node = malloc(sizeof(list_t));
	if (temp_node == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp_node->len = length;
	temp_node->str = strdup(str);
	temp_node->next = *head;
	*head = temp_node;
	return (temp_node);
}
