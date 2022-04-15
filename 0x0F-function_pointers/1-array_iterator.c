#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: pointer
 * @size: size
 * @action: pointer to fuction
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action) (int))
{
	while (size)
	{
		(*action)(*array);
		array++;
		size--;
	}
}
