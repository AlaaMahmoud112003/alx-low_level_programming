#include "lists.h"

/**
 * listint_len - function number of elements in a linked listint_t list.
 *
 * @h: is the head pointer
 *
 * Return: return number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
	h = h->next;
		num++;
	}
	return (num);
}
