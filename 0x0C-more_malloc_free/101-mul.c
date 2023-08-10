#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks string contains a non-digit char
 * @s:  the string to evaluate
 *
 * Return: 0 if a non-digit , 1 otherwise
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - return length of  string
 * @s: the string to evaluate
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * errors - the handle the errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplition between two positive number
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: always 0  is (Successed)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int nu1, nu2, nu, x, arry, digital1, digital2, *result, b = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	nu1 = _strlen(s1);
	nu2 = _strlen(s2);
	nu = nu1 + nu2 + 1;
	result = malloc(sizeof(int) * nu);
	if (!result)
		return (1);
	for (x = 0; x <= nu1 + nu2; x++)
		result[x] = 0;
	for (nu1 = nu1 - 1; nu1 >= 0; nu1--)
	{
		digital1 = s1[nu1] - '0';
		arry = 0;
		for (nu2 = _strlen(s2) - 1; nu2 >= 0; nu2--)
		{
			digital2 = s2[nu2] - '0';
			arry += result[nu1 + nu2 + 1] + (digital1 * digital2);
			result[nu1 + nu2 + 1] = arry % 10;
			arry /= 10;
		}
		if (arry > 0)
			result[nu1 + nu2 + 1] += arry;
	}
	for (x = 0; x < nu - 1; x++)
	{
		if (result[x])
			b = 1;
		if (b)
			_putchar(result[x] + '0');
	}
	if (!x)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
