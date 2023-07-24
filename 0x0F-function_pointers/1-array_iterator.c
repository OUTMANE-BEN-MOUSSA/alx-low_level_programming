#include <stdlib.h>

/**
 * array_iterator -  This a function that executes a function given as
 * a parameter on each element of an array.
 * @array: A pointer to array
 * @size: Size of the array
 * @action: action(function) to iterate throw array
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (action == NULL || array == NULL)
		return;

	for (k = 0; k < size; k++)
		action(array[k]);
}
