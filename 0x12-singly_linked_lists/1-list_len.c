#include "lists.h"

/**
 * list_len - print number of elements in a linked list
 * @h: head pointer
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}