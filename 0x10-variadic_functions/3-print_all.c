#include "variadic_functions.h"

/**
 * print_all - the function Print arguments .
 * @format: necessary operations
 * Return: void (0)
 */

void print_all(const char * const format, ...)
{
	int x;
	int lin;
	char *tra;
	va_list a_list;

	va_start(a_list, format);
	x = 0;
	while (format != NULL && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				lin = 0;
				break;
			case 'x':
				printf("%i", va_arg(a_list, int));
				lin = 0;
				break;
			case 'f':
				printf("%f", va_arg(a_list, double));
				lin = 0;
				break;
			case 's':
				tra = va_arg(a_list, char*);
				if (tra == NULL)
					tra = "(nil)";
				printf("%s", tra);
				lin = 0;
				break;
			default:
				lin = 1;
				break;
		}
		if (format[x + 1] != '\0' && lin == 0)
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(a_list);
}
