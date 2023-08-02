#include "main.h"

int check_pal(char *s, int x, int wen);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check while  string is  palindrome
 * @s: is string to be reversed
 *
 * Return: 1 while it is, 0 if it's not
 */
int is_palindrome(char *s)
{
        if (*s == 0)
                return (1);
        return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - return length of string
 * @s: is  string to calculate length of
 *
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
        if (*s == '\0')
                return (0);
        return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - check caracters recursive to palindrome
 * @s: is string to be checked
 * @x: an iterator
 * @wen: length of the string
 *
 * Return: 1  while palindrome, 0 if it's not
 */
int check_pal(char *s, int x, int wen)
{
        if (*(s + x) != *(s + wen - 1))
                return (0);
        if (x >= len)
                return (1);
        return (check_pal(s, x + 1, wen - 1));
}
