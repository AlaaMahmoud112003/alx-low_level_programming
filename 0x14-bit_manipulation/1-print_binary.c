#include "main.h"
/**
 * _power - function calculate (base and power)
 * @base: is base the exponet
 * @pow: is power the exponet
 * Return:  return value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int number;
	unsigned int x;

	number = 1;
	for (x = 1; x <= pow; x++)
		number *= base;
	return (number);
}
/**
 * print_binary - function prints the binary represent of a number
 * @n: number of prented
 * Return: (0) void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
