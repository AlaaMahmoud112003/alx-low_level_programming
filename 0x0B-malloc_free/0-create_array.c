#include "main.h"
#include <stdlib.h>
/**
 * create_array -  A create array of size char in c
 * @size: the size of the array
 * @c: the char
 * Description: create array of size char in c
 * Return: the pointer array, NULL while fail
 */
char *create_array(unsigned int size, char c)
{
	char *ala;
	unsigned int x;

	ala = malloc(sizeof(char) * size);
	if (size == 0 || ala == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		ala[x] = c;
	return (ala);
}
