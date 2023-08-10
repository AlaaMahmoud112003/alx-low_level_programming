#include "main.h"

/**
 * _print - move string to the left and print string
 * @str: move to string
 * @l:  the size of string
 *
 * Return: 0
 */
void _print(char *str, int l)
{
	int x, y;

	x = y = 0;
	while (x < l)
	{
		if (str[x] != '0')
			y = 1;
		if (y || x == l - 1)
			_putchar(str[x]);
		x++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - multiplie char with string
 *@n:  the char to multip
 * @num:  the string to multip
 * @num_index: last without NULL index num
 * @dest: destinate of the multiplication
 * @dest_index: max index to start the addition
 *
 * Return: pointer if is NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int y, b, nul1, nul2, add1, add2;

	nul2 = add2 = 0;
	for (y = num_index, b = dest_index; y >= 0; y--, b--)
	{
		nul1 = (n - '0') * (num[y] - '0') + nul2;
		nul2 = nul1 / 10;
		add1 = (dest[b] - '0') + (nul2 % 10) + add2;
		add2 = add1 / 10;
		dest[b] = add1 % 10 + '0';
	}
	for (add2 += nul2; b >= 0 && add2; b--)
	{
		add1 = (dest[b] - '0') + add2;
		add2 = add1 / 10;
		dest[b] = add1 % 10 + '0';
	}
	if (add2)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits - check argument are digits
 * @av: pointer to the argument
 *
 * Return: 0 if success digits, 1 if fail
 */
int check_for_digits(char **av)
{
	int x, y;

	for (x = 1; x < 3; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			if (av[x][y] < '0' || av[x][y] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initializtion the string
 * @str:  the sting to initializtion
 * @l: length of the strinf
 *
 * Return: 0
 */
void init(char *str, int l)
{
	int x;

	for (x = 0; x < l; x++)
		str[x] = '0';
	str[x] = '\0';
}

/**
 * main - multipltion between two numbers
 * @argc: number of the argument
 * @argv:  the number of argument vector
 *
 * Return: zero if sucess or exit of 98 if fail
 */

int main(int argc, char *argv[])
{
	int x1, x2, xn, tx, x;
	char *c;
	char *d;
	char f[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (tx = 0; f[tx]; tx++)
			_putchar(f[tx]);
		exit(98);
	}
	for (x1 = 0; argv[1][x1]; x1++)
		;
	for (x2 = 0; argv[2][x2]; x2++)
		;
	xn = x1 + x2 + 1;
	c = malloc(xn * sizeof(char));
	if (c == NULL)
	{
		for (tx = 0; f[tx]; tx++)
			_putchar(f[tx]);
		exit(98);
	}
	init(c, xn - 1);
	for (tx = x2 - 1, x = 0; tx >= 0; tx--, x++)
	{
		d = mul(argv[2][tx], argv[1], x1 - 1, c, (xn - 2) - x);
		if (d == NULL)
		{
			for (tx = 0; f[tx]; tx++)
				_putchar(f[tx]);
			free(c);
			exit(98);
		}
	}
	_print(c, xn - 1);
	return (0);
}
