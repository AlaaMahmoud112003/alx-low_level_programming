#include "main.h"

int actual_prime(int n, int x);

/**
 * is_prime_number - say while integer is prime number or not
 * @n: the number to be evaluated
 *
 * Return: 1 if n was prime number, 0 if it was not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculate while number is prime recursive
 * @n: the number to be evaluated
 * @x: an iterator
 *
 * Return: 1 while  n was prime, 0 if it was not
 */
int actual_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (actual_prime(n, x - 1));
}
