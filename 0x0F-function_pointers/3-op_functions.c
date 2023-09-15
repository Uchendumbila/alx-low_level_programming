#include "3-calc.h"

int op_add(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int op_mul(int a, int b);
int op_sub(int a, int b);

/**
 * op_add - A fxn that returns the sum of two numbers a and b.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of the two numbers a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A fxn that returns the difference of two numbers a and b.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference of the two numbers a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A fxn that returns the product of two numbers a and b.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of the two numbers a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A fxn that returns the division of two numbers a and b.
 * @a: The first number
 * @b: The second number
 *
 * Return: The quotient of the two numbers a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - A fxn that returns the remainder of the division
 * of two numbers a and b.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of the two numbers a and b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
