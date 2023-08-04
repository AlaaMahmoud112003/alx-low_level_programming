#include <stdio.h>
#include "main.h"

/**
 * _putchar - write character c to stdout
 * @c:Ther character to be printed
 *
 * Return: 1 On successed.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
