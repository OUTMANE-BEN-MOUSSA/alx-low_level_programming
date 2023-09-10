#include "main.h"

/**
 * _strlen_recursion - This function that the length of a string.
 * @s: An input string to printing
 * Return: The length of the string as integer
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
