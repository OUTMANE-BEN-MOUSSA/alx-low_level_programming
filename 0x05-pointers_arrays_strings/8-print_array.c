#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 * followed by a new line.
 * @a: an input array
 * @n: an input integer
 * Return: void
 */
void print_array(int *a, int n)
{
	int k = 0;

	for (; k < n; k++)
	{
		printf("%d", a[k]);
		if (k < n - 1)
			printf(", ");
	}
	putchar('\n');
}
