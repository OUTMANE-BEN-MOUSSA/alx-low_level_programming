#include "main.h"

/**
 * reverse_array - a function that reverses an array.
 * @a: an input array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int var;

	while (i < n--)
	{
		var = a[i];
		a[i++] = a[n];
		a[n] = var;
	}
}
