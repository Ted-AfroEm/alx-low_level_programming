#include "main.h"

/**
 * _strspn - number of bytes in the initial segment of s
 * @s: string pointer
 * @accept: string substring
 *
 * Return: unsinged n
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	char *p;

	p = s;
	n = 0;
	while (*accept != '\0')
	{
		while (*s != '\0')
		{
			if (*accept == *s)
				n++;
			s++;
		}
		s = p;
		accept++;
	}
	return (n);
}
