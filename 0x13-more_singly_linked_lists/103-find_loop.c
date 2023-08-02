#include "lists.h"

/**
 * find_listint_loop - This function finds the loop in a list
 * @head: A pointer to listint_t structure
 * Return: The address of the node where the loop start or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *o = head, *t = head;

	while (o && t && t->next)
	{
		o = o->next;
		t = t->next->next;
		if (o == t)
		{
			return (o);
		}
	}
	return (NULL);
}
