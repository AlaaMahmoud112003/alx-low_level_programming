#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert  string to integer
 * @s: string to convert
 *
 * Return: int convert from string
 */
int _atoi(char *s)
{
	int x, y, n, len, f, digit;

	x = 0;
	y = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (x < len && f == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			f = 0;
		}
		x++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplie between two numbers
 * @argc: the number of the arguments
 * @argv: the array of the arguments
 *
 * Return: Always 0 is (Successed), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, sum1, sum2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	sum1 = _atoi(argv[1]);
	sum2 = _atoi(argv[2]);
	result = sum1 * sum2;

	printf("%d\n", result);

	return (0);
}
