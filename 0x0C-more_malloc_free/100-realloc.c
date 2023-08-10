#include "main.h"

/**
 * _realloc - reallocate memory block by malloc and free
 *
 * @ptr: pointer to memory be allocated
 * @old_size: size, by bytes the allocated for ptr
 * @new_size: new size, by bytes  for new memory block
 *
 * Return: pointer to array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *b;
	unsigned int a, new = new_size;
	char *oldptr = ptr;

	if (ptr == NULL)
	{
		b = malloc(new_size);
		return (b);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	b = malloc(new_size);
	if (b == NULL)
		return (NULL);
	if (new_size > old_size)
		new = old_size;
	for (a = 0; a < new; a++)
		b[a] = oldptr[a];
	free(ptr);
	return (b);
}
