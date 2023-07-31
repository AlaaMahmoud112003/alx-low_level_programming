#include "main.h"
/**
 * _strchr - entry any point
 * @s: input data
 * @c: input any data
 * Return: Always 0  is (Successed)
*/
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
