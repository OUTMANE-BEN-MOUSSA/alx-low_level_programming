#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - This is a function that sums all its parameters
 * @n: number of parameters
 * @...: Other parameters not defined
 * Return: The sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	unsigned int i = 0;
	int sum_of_all = 0;

	if (n == 0)
		return (0);

	va_start(l, n);
	for (; i < n; i++)
		sum_of_all += va_arg(l, int);

	va_end(l);
	return (sum_of_all);
}
