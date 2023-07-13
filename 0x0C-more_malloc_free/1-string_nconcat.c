#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - This function concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * @n: an input integer of number of string to concatenate
 * Return: Apointer to concatened strings or NULL if it is NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int k = 0, lens1 = 0, lens2 = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[lens1])
		lens1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[lens2])
		lens2++;

	if (n >= lens2)
		n = lens2;

	str = malloc(lens1 + n + 1);
	if (str == NULL)
		return (NULL);

	for (; k < (lens1 + n); k++)
	{
		if (k < lens1)
			str[k] = *s1, s1++;
		else
			str[k] = *s2, s2++;
	}
	str[k] = '\0';
	return (str);
}
