#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c 
 * @c: character to print
 *
 * Return: success is 1.
 * On error, -1 returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
