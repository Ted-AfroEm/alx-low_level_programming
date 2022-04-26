#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: double pointer
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *ptr2;

	ptr2 = *head;
	while (ptr2 != NULL)
	{
		ptr = ptr2;
		ptr2 = ptr2->next;
		free(ptr);
	}
	*head = NULL;
}
