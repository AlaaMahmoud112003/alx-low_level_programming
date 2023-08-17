#include "variadic_functions.h"

/**
 * print_numbers - the function print numbers followed new line (/n)
 * @n: the number
 * @separator: separator of two numbers
 * Return: Always 0 (succssed)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ap, int));
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
