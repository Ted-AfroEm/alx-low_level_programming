#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: pointer
 * @size: integer
 * @cmp: function pointer
 *
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	while (size)
	{
		(*cmp)(*array);
		if ((*cmp)(*array) == 1)
			return (i);
		i++;
		array++;
		size--;
	}
	if (size <= 0)
		return (-1);
	return (-1);
}
