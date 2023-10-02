#include "main.h"

/**
 * set_bit - function value a bit to 1 at a given index.
 * @index: beginning from 0 of the bit you want to set
 * @n: is the pointer number of i
 * Return: 1 success, or -1 failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x = 1 << index;
	*n = *n | x;

	return (1);
}
