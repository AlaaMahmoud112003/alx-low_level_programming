#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function deletes the head node
 * @head: is the double pointer
 *
 *Return: empty (0)
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int x;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	x = start->x;
	free(start);
	return (x);
}
