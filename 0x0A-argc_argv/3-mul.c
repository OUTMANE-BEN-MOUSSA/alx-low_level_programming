#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is a program that multiplies two numbers
 * @argc: The number of arguments
 * @argv: The arguments values
 * Return: Returns 0 if Success and 1 otherwise
 */
int main(int argc, char **argv)
{
	int number1, number2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		number1 = atoi(argv[1]);
		number2 = atoi(argv[2]);
		result = number1 * number2;
		printf("%d\n", result);
		return (0);
	}
}
