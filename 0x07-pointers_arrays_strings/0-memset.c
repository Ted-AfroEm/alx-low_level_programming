#include "main.h"

/**
 * _memset - fills the first n bytes fo the memory area pointed to by s
 * with the constant byte b
 * @s: string pointer
 * @b: char vasue to fill
 * @n: number of bytes of memory
 *
 * Return: s pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p;
	unsigned int i = 0;

	p = s;
	while (i < n || *s != '\0')
	{
		*s = b;
		s++;
		i++;
	}
	s = p;
	return (s);
}
