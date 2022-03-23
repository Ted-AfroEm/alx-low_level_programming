#include "main.h"

/**
 * _strcpy - copies the string pinted by src to dest
 * @dest: destination string
 * @src: source string
 *
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	char *p;
	p = dest;
	do {
		*dest = *src;
		dest++;
		src++;
	} while (*src != '\0');
	*dest = *src;
	dest = p;
	return (dest);
}
