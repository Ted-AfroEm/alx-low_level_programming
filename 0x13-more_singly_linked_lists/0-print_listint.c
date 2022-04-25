#include "lists.h"

/**
 * size_t print_listint(const listint_t *h)
 * @h: pointer head
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%i\n",h->n);
		h = h->next;
		i++;
	}

	return (i);
}
