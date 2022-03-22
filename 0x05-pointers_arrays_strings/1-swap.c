#include "main.h"

/**
 * swap_int - swapt the valuse of two integers
 * @a: pointer to first integer
 * @b: pointer to second integer
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
