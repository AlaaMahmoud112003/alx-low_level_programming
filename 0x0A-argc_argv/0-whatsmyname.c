#include <stdio.h>
#include "main.h"

/**
 * main - print name of program
 * @argc: the number of the arguments
 * @argv: the array of the arguments
 *
 * Return: Always 0 is (Successed)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
