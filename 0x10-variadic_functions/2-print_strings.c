#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - This a function that print strings
 * @separator: An input string to be printed between strings
 * @n: number of parameters
 * @...: Other parameters not defined
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i = 0;
	char *string;

	va_start(l, n);
	for (; i < n; i++)
	{
		string = va_arg(l, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(l);
}
