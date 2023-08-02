#include "main.h"

/**
 * wildcmp - Compare between strings
 * @x1: the pointer to be string params
 * @x2: the pointer to be string params
 * Return: 0 alwayls is (successed)
 */

int wildcmp(char *x1, char *x2)
{
	if (*x1 == '\0')
	{
		if (*x2 != '\0' && *x2 == '*')
		{
			return (wildcmp(x1, x2 + 1)); 
		}
		return (*x2 == '\0');
	}

	if (*x2 == '*')
	{
		return (wildcmp(x1 + 1, x2) || wildcmp(x1, x2 + 1));
	}
	else if (*x1 == *x2)
	{
		return (wildcmp(x1 + 1, x2 + 1));
	}
	return (0);
}
