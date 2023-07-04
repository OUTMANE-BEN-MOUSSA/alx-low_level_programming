#include "main.h"

/**
 * _memset - a function fills memory with  bytes
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: returns a char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *location = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (location);
}
