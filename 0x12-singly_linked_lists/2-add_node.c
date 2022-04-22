#include "lists.h"

/**
 * add_node - add new node at the beginning of a list_t
 * @head: double pointer
 * @str: string pointer to add
 *
 * Return: address of new element else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int i = 0;
	char *cpStr = strdup(str);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		str++;
		i++;
	}
	newNode->str = cpStr;
	newNode->len = i;
	newNode->next = (*head);
	(*head) = newNode;
	return (newNode);
}
