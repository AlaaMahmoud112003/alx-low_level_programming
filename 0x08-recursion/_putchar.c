#include "main.h"
#include <unistd.h>
/**
 * _putchar - write character c to stdout
 * @c: character to be  print
 *
 * Return:  always success 1.
 * On error, -1 return
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
