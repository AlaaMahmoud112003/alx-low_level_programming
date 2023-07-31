#include "main.h"
/**
 *_memcpy - a function copies memory area
 *@dest: memory that is stored
 *@src: the memory where is copied
 *@n: the number of bytes
 *
 *Return: copied memory with n bytes that change
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int c = n;

	for (; x < c; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
