#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: integer
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
		n = n * -1;
	digit = n % 10;
	_putchar('0' + digit);
	return (digit);
}
