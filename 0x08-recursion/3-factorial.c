#include "main.h"

/**
 * factorial - return factorial of the number
 * @n:the number to return factorial from
 *
 * Return:is the factorial of n
 */
int factorial(int x)
{
	if (x < 0)
		return (-1);
	if (x == 0)
		return (1);
	return (x * factorial(x - 1));
}
