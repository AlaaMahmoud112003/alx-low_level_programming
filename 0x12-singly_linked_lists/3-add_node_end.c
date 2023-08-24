#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - function finds the length of the string
 * @str: string for find the length .
 *
 * Return: return length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int x;

for (x = 0; str[x]; x++)
;
	return (x);
}

/**
 * add_node_end - function adds  new node to end of linked list
 * @head: double pointer for linked list
 * @str: string for add to the new node
 *
 * Return: return pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *xp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	xp = *head;
	while (xp->next)
		xp = xp->next;
	xp->next = new;
	return (new);
}
