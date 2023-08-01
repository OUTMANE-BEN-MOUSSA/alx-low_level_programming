#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - This function deletes the node at
 * specified index from list
 * @head: A pointer to listint_t structure
 * @index: The index of the node to delete
 * Return: 1 if succeeded or -1 if it failes
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node, *dnode;
	unsigned int k = 1;

	if (*head == NULL)
		return (-1);

	temp_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_node);
	}
	else
	{
		while (k < index)
		{
			temp_node = temp_node->next;
			if (temp_node == NULL)
				return (-1);
			k++;
		}
		dnode = temp_node;
		dnode = dnode->next;
		temp_node->next = dnode->next;
		free(dnode);
	}
	return (1);
}
