#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function Realeases the memory allocated for list
 *
 * @head: A pointer to the first node of list to free
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
