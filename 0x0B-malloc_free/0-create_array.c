#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creat an array of chars
 * @size: unsigned int
 * @c: char
 *
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	while (size)
	{
		size--;
		s[i] = c;
		i++;
	}
	return (s);
}
