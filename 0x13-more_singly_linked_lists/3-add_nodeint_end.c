#include "lists.h"

/**
 * add_nodeint_end - add node at the end of a list
 * @head: head of a list
 * @n: new element
 *
 * Return: address of new element else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *ptr;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = newNode;
	return (newNode);
}
