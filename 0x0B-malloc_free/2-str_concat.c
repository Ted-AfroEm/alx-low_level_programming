#include "main.h"

int stringlen(char *s);
char *stradd(char *s, char *sadd, int size);

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{

	char *s;
	char *p;
	int str1len, str2len;
	int size;

	str1len = stringlen(s1);
	str2len = stringlen(s2);

	size = str1len + str2len + 1;
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);

	p = s;
	s = stradd(s, s1, str1len);
	s = stradd(s, s2, str2len);
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
