#include "main.h"
/**
 * _strpbrk - Entry  any point
 * @s: input the data
 * @accept: input any data
 * Return: Always 0 is (Successed)
 */
char *_strpbrk(char *s, char *accept)
{
		int x;

		while (*s)
		{
			for (x = 0; accept[x]; x++)
			{
			if (*s == accept[x])
			return (s);
			}
		s++;
		}

	return ('\0');
}
