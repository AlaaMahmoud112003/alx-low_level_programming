#include "lists.h"

/**
 * sum_listint - function sum of all the data (n) of a listint_t linked list.
 * @head: is the pointer to the first node
 *
 * Return: sum total the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
