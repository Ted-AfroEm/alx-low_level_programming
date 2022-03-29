#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to copy
 *
 * Return: dest ponter
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p;
	unsigned int i;

	p = dest;
	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
		if (*src == '\0')
			break;
	}
	dest = p;
	return (dest);
}
