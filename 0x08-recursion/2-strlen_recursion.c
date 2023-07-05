#include "main.h"

/**
 * _strlen_recursion - function returns the length of a string
 * @s: An input string to printing
 * Return: an integer
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
