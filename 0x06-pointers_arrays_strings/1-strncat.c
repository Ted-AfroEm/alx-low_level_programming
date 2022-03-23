#include "main.h"

/**
 * _strncat - concatrnates two string n size
 * @dest: destination string
 * @src: source string
 * @n: number of string to string
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *p;

	p = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	dest = p;
	return (dest);
}
