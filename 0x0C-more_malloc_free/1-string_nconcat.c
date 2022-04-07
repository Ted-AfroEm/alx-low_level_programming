#include "main.h"

int stringlen(char *s);
char *stradd(char *s, char *sadd, int size);

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: size
 *
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int str1len, str2len;
	char *s, *p;
	int size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str1len = stringlen(s1);
	str2len = stringlen(s2);

	if (n >= str2len)
		n  = str2len;
	size = str1len + n;
	s = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return (NULL);
	p = s;
	s = stradd(s, s1, str1len);
	s = stradd(s, s2, n);
	*s = '\0';
	s = p;
	return (s);
}

/**
 * stringlen - calculate the length of the string
 * @s: string
 *
 * Return: string length
 */
int stringlen(char *s)
{
	int strlen;

	strlen = 0;
	while (*s)
	{
		s++;
		strlen++;
	}
	return (strlen);
}

/**
 * stradd - add string
 * @s: string
 * @sadd: string to concatinate
 * @size: integer
 *
 * Return: string pointer
 */
char *stradd(char *s, char *sadd, int size)
{
	while (size)
	{
		*s = *sadd;
		s++;
		sadd++;
		size--;
	}

	return (s);
}
