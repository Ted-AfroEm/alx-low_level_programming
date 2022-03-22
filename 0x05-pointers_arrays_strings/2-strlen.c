#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to an string
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	return (strlen);
}
