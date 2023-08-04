#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments that receive
 * @argc: the number of the arguments
 * @argv: the array of the arguments
 *
 * Return: Always 0 is (Successed)
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
