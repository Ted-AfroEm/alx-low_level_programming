#include "lists.h"

/**
 * add_nodeint - add node at the beginning of a list
 * @head: double pointer to head
 * @n: new element
 *
 * Return: address of the new element else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
