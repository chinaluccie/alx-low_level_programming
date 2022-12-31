#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums arguments
 * @n: number of args
 *
 * Return: if n == 0 return 0
 */
int sum_them_all(const unsigned int n, ...)
{

	int sum = 0;
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);

	if (n == 0)
		return (0);
	for (i = 0 ; i < n ; i++)
		sum += va_arg(arguments, int);

	va_end(arguments);

	return (sum);
}
