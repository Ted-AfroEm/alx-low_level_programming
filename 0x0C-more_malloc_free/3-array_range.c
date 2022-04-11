#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: integer
 * @max: integer
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *range;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min;
	if (min == 0)
		size++;
	range = malloc(sizeof(int) * size);
	if (range == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		range[i] = min;
		min++;
	}
	return (range);
}
