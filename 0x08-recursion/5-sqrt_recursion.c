#include "main.h"

int actual_sqrt_recursion(int n, int x);

/**
 * _sqrt_recursion - return natural square  the root of  number
 * @n: number to calculate square root
 *
 * Return: result square root
 */
int _sqrt_recursion(int n)
{
      if (n < 0)
	     return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurse to find natural
 * square the root of number
 * @n: number to calculate sqaure root
 * @x: the iterator
 * Return: result square root
 */
int actual_sqrt_recursion(int n, int x)
{
        if (x * x > n)
                return (-1);
        if (x * x == n)
                return (x);
        return (actual_sqrt_recursion(n, x + 1));
}
