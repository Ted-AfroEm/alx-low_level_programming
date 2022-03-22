#include <stdio.h>
#include "main.h"

/**
 * print_array - print array
 * @a: pointer for array
 * @n: length of array to print
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n; i++)
	{
		printf("%i", *a);
		a++;
		if (i == (n - 1))
			break;
		printf(", ");
	}
	printf("\n");
}
