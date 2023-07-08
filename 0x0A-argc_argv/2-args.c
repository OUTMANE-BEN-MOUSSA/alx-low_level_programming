#include <stdio.h>

/**
 * main - This is program that prints all arguements received
 * @argc: Number of arguements
 * @argv: Arguement values
 * Return: returns 0 (Success)
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
