#include "lists.h"

/**
 * add_node_end - add new node at the end of a list_t
 * @head: double pointer
 * @str: string pointer to add
 *
 * Return: address of new element else NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	int i;
	char *dupStr = strdup(str);
	list_t *ptr;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	while (*str != '\0')
	{
		str++;
		i++;
	}

	newNode->str = dupStr;
	newNode->len = i;
	newNode->next = NULL;

	ptr = *head;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = newNode;
	return (newNode);

}
