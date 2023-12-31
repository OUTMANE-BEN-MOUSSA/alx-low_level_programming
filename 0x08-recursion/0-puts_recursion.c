#include "main.h"

/**
 * _puts_recursion - This function prints a string, followed by a new line.
 * @s: An input string to printing
 * Return: Void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
