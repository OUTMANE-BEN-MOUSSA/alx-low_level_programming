#include <stdio.h>

/**
*main - Print Sizes
*
*Return : Always 0 (success)
*/
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of a int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size float: %zu byte(s)\n", sizeof(float));
	return (0);
}
