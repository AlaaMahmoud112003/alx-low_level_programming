#include "main.h"

/**
 * _pow_recursion - return value of x raise to power of y
 * @a: the value to be raised
 * @c: is rhe power
 *
 * Return: the result of power
 */
int _pow_recursion(int a, int c)
{
	if (c < 0)
		return (-1);
	if (c == 0)
		return (1);
	return (a * _pow_recursion(a, c - 1));
}
