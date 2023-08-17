#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - the function return the sum of two numbers.
 * @a: 1 number.
 * @b: 2 number.
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - the function return difference of between two numbers.
 * @a: 1 number.
 * @b: 2 number.
 *
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - the function return product of between two numbers.
 * @a: 1 number.
 * @b: 2 number.
 *
 * Return:  product of two numbers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - the function return division of between two numbers.
 * @a: 1 number.
 * @b: 2 number.
 *
 * Return: result of division a/b  .
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - the function return remainder of division between two numbers.
 * @a: 1 number.
 * @b: 2 number.
 *
 * Return: result of a % b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
