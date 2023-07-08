#include <stdio.h>

/**
 * main - This is a  program that prints the number of arguements you passed into it
 * @argc: Number of arguments
 * @argv: The argument values
 * Return: returns 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
