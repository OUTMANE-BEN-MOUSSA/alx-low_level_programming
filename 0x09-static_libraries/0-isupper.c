#include "main.h"

/**
 * _isupper - Function that checks for uppercase characters.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 if not
 */
int _isupper(int c)
{
	char upper = 'A';
	int isupper = 0;

	for (; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
