#include "main.h"
int check_pal(char *s, int x, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - check string is a palindrome
 * @s: the string to be reversed
 * Return: 1 if it is, 0 if it is not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - return length of string
 * @s: the string to calculate the length 
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks characters recursive palindrome
 * @s: string to be checked
 * @x: an iterator
 * @len: length of the string
 * Return: 1 if it is, 0 if it is not
 */
int check_pal(char *s, int x, int len)
{
	if (*(s + x) != *(s + len - 1))
		return (0);
	if (x >= len)
		return (1);
	return (check_pal(s, x + 1, len - 1));
}
