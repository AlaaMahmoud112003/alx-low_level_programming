#include "main.h"
/**
 * _print_rev_recursion -  the Print string in  the reverse.
 * @s: string to print.
 * Return: Always 0 is (Successed)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
