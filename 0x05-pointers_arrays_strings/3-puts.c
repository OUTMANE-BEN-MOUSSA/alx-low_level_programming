#include "main.h"

/**
 * _puts - Write a function that prints a string, followed
 * by a new line, to stdout.
 * @str: an input string
 * Return: void
 */
void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
