#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This is a program that adds positive numbers
 * @argc: The number of arguments
 * @argv: The argument values
 * Return: Returns 0 (Success)
 */
int main(int argc, char **argv)
{
	int number, i, result = 0;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		number = atoi(argv[argc]);
		result += number;
	}
	printf("%d\n", result);
	return (0);
}
