#include "main.h"

/**
 * malloc_checked - allocated memory using malloc
 * @b: size
 *
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
	{
		free(s);
		exit(98);
	}

	return (s);
}
