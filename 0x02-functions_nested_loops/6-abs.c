#include "main.h"

/**
 * _abs - compute absolute value
 * @n: number
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else if (n == 0)
		return (0);
	else
		return (n);
}
