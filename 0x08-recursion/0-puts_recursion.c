#include "main.h"
/**
 * _puts_recursion -is the  function like as puts();
 * @s: input the data
 * Return: Always 0  is (Successed)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
