#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments passe to program
 * @argc: the number of the arguments
 * @argv: the array of the arguments
 *
 * Return: Always 0 is (Successed)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
