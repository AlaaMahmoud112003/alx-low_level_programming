#include "main.h"
/**
 * flip_bits - function flip to get from one number to another.
 * @n: is first number
 * @m: is second number
 * Return: return the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int y, x;

	y = 0;
	result = 1;
	differnce = n ^ m;
	for (x = 0; x < (sizeof(unsigned long int) * 8); x++)
	{
		if (result == (differnce & result))
			y++;
		result <<= 1;
	}

	return (y);
}
