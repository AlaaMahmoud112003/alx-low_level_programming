#include "main.h"
/**
 * _strstr - Entry  any point
 * @s: input the data
 * @accept: input any data
 * Return: Always 0 is (Successed)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *p = needle;

		while (*x == *p && *p != '\0')
		{
			x++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
