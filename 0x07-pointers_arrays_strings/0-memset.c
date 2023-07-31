#include "main.h"
/**
 * _memset -file  block of the memory with specific value
 * @s: is  starting address of the memory to filled
 * @b: desire value
 * @n:  the number of bytes to change
 *
 * Return: change the array with new value for bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
