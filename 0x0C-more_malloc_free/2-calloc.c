#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: array of int
 * @size: integer
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *n, *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = malloc(sizeof(int) * nmemb * size);
	if (n == NULL)
		return (NULL);
	p = n;
	while (size)
	{
		*n = 0;
		n++;
		size--;
	}
	n = p;
	return (n);
}
