#include "lists.h"

/**
 * free_list - This function frees all elements in a linked list
 * @head: pointer to head element of list
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *temp_node;

	temp_node = head;
	while (head)
	{
		temp_node = head;
		head = head->next;
		free(temp_node->str);
		free(temp_node);
	}
	free(head);
}
