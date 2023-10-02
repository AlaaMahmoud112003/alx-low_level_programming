#include "main.h"
/**
 * get_endianness - function checks the endianness
 *
 * Return: 0 if big end, 1 if small end
 */
int get_endianness(void)
{
	int x;
	char *c;

	x = 1;
	c = (char *)&x;

	return (*c);
}
