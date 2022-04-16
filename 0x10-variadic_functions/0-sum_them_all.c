#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: number
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int  sum = n;
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
