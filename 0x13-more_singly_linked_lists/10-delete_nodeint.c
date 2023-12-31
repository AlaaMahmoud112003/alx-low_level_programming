#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function deletes node at index
 * @head: is the double pointer
 * @index: is of node
 *
 * Return: pointer to index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *temp, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	temp = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	next = temp->next;
	temp->next = next->next;
	free(next);
	return (1);

}
