#include <stdio.h>

/**
 * main - The Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'z'; low <= 'a'; low--)
		putchar(low);
		putchar('\n');

	return (0);
}
