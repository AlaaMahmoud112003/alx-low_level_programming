#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string are digit
 * @str: array the str
 *
 * Return: Always 0 is (Successed)
 */
int check_num(char *str)
{
	/*the Declaring of the variables*/
	unsigned int num;

	num = 0;
	while (num < strlen(str)) /*the num string*/

	{
		if (!isdigit(str[num])) /*check str there are digit*/
		{
			return (0);
		}

		num++;
	}
	return (1);
}

/**
 * main - Print name of program
 * @argc: num arguments
 * @argv: the Arguments
 *
 * Return: Always 0 is (Successed)
 */

int main(int argc, char *argv[])

{

	/* the Declaring of variables*/
	int num;
	int str_to_int;
	int sum = 0;

	num = 1;
	while (num < argc) /*Go whole array*/
	{
		if (check_num(argv[num]))

		{
			str_to_int = atoi(argv[num]); /*ATOI convert string to int*/
			sum += str_to_int;
		}
		else  /*Condition else */
		{
			printf("Error\n");
			return (1);
		}

		num++;
	}

	printf("%d\n", sum); /*print function sum*/

	return (0);
}
