#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search from
 * @accept: string to search in @s
 *
 * Return: return the s that matches one of the bytes else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	p = accept;
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = p;
		s++;
	}
	return (NULL);
}
