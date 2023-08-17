#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its your opcodes
 * @argc: the number of the arguments
 * @argv: the array of the arguments
 *
 * Return: Always 0 (Successed)
 */
int main(int argc, char *argv[])
{
	int byte, x;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (x = 0; x < byte; x++)
	{
		if (x == byte - 1)
		{
			printf("%02hhx\n", arr[x]);
			break;
		}
		printf("%02hhx ", arr[x]);
	}
	return (0);
}
