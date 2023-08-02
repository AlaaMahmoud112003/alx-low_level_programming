#include "main.h"
/**
 * _puts_recursion -is the  function like as puts();
 * @s: input the data
 * Return: Always 0  is (Successed)
 */
void _puts_recursion(char *x)
{
	if (*x)
	{
		_putchar(*x);
		_puts_recursion(x + 1);
	}

	else
		_putchar('\n');
}
