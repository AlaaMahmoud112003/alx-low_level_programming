#include "main.h"
/**
 * _print_rev_recursion -  the Print string in  the reverse.
 * @s: string to print.
 * Return: Always 0 is (Successed)
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
