#include "function_pointers.h"

/**
 * print_name - the function of  the prints a name.
 * @name: the name
 * @f: the name of function
 *
 * Rteurn: void (0)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
