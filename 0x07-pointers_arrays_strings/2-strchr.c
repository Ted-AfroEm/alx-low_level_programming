#include "main.h"
#include <stddef.h>

/**
 * _strchr - located a characater in a string
 * @s: string pointer
 * @c: char to compare
 *
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
