#include "main.h"

/**
 * main - Entry Point
 *
 * Return: Always 0 if success
 */

int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');
	return (0);
}
