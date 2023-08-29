#include "lists.h"

/**
 * get_nodeint_at_index - the function node of a listint_t linked list.
 * @head: is the pointer of the first node
 * @index: is the index of the node
 *
 * Return: pointer of the Index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
		return (NULL);
	for (x = 0; x < index; x++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
