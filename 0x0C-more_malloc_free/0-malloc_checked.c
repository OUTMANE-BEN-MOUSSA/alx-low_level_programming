#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - This function allocates memory using malloc
 * @b: An unsigned input integer
 * Return: Apointer to allocated memory or NULL if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *table;

	table = malloc(b);

	if (table == NULL)
		exit(98);

	return (table);
}
