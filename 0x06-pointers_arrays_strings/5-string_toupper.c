#include "main.h"
#include <stdio.h>
/**
 * string_toupper(char *s) - changes all lowercase letters of a string
 * to uppercase
 * @s: pointer to string
 *
 * Return: return s
 */
char *string_toupper(char *s)
{
	char lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
			  'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
			  's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char upper[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
			  'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
			  'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char *p;
	int i = 0;

	p = s;
	while (*s != '\0')
	{
		while (i < 26)
		{
			if(*s == lower[i])
			{
			       	lower[i] = upper[i];
				printf("found %c", lower[i]);
			       	break;
			}
			i++;
		}
		i = 0;
		s++;
	}

	s = p;
	return (s);
}
