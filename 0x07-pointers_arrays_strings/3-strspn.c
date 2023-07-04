#include "main.h"

/**
 * _strspn - function gets the length of a prefix substring
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: char pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int number = 0, flag;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				number++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (number);
}
