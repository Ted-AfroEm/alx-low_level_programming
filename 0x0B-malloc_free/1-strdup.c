#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - to a newly allocated space in memory
 * @str: string pointer
 *
 * Return: string pointer
 */
char *_strdup(char *str)
{
	char *p, *s;
	int size, i;

	size = 0;
	i = 0;
	p = str;
	if (str == NULL)
		return (NULL);
	while (*str)
	{
		size++;
		str++;
	}
	size++;
	s = malloc(sizeof(char) * size);
	str = p;
	while (size)
	{
		s[i] = str[i];
		i++;
		size--;
	}
	return (s);
}
