#include "main.h"

/**
 * print_numbers - a function that prints numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
