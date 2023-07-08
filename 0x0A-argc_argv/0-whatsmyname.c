#include <stdio.h>

/**
 * main - This is a program that prints its name, followed by a new line
 * @argc: Number of arguements
 * @argv: argument value
 * Return: returns 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
