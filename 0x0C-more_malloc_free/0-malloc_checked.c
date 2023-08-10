#include "main.h"

/**
 * malloc_checked - process the termination with status value 98
 *
 * @b: allocat to memory
 *
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);

}
