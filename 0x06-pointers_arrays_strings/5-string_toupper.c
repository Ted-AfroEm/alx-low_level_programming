#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: pointer to string
 *
 * Description: this is a function that change to uppercase
 *
 * Return: return s
 */
char *string_toupper(char *s)
{
	char *p;

	p = s;
	while (*s != '\0')
	{
		if (*s >= 97 && *s <= 122)
		{
			*s = *s - 32;
		}
		s++;
	}

	s = p;
	return (s);
}
