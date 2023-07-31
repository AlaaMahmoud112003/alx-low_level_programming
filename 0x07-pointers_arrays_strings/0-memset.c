#include "main.h"
/**
 * _memset - fill the block of  the memory with specific value
 * @s: is starting address of memory to fill
 * @b: desire value
 * @n: number of bytes can to change
 *
 * Return: the change of array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
