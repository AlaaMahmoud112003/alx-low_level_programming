#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function checks the code for School students.
 * @h: the name of list
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	int num = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		num++;
		h = h->next;
	}
	return (num);
}
