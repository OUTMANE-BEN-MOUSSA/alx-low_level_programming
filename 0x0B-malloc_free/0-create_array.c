#include "main.h"
#include <stdlib.h>

/**
 * create_array - the function creates an array of chars,
 * initializes it with a specific char.
 * @size: size of the array
 * @c: the character to initialized the array
 * Return: Apointer to the array or NULL if it fails or the size is zero
 */
char *create_array(unsigned int size, char c)
{
	char *table;
	unsigned int i = 0;

	table = malloc(size * sizeof(char));

	if (table == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		table[i] = c;
		i++;
	}
	return (table);
}
