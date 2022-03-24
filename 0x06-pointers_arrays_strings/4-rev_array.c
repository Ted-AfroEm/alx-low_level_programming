#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array
 * @n: size of the array
 *
 * Return: Always (0).
 */
void reverse_array(int *a, int n)
{
	int swap1, swap2;
	int i = 0;
	int j;

	n--;
	j = n;
	while (i <= n)
	{
		swap1 = a[i];
		swap2 = a[n - i];
		a[i] = swap2;
		a[n - i] = swap1;
		if (i == j || i == j - 1)
			break;
		i++;
		j--;
	}
}
