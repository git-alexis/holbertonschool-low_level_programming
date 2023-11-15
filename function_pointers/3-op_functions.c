#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Addition of 2 numbers
 *
 * @a: First integer variable
 * @b: Second integer variable
 *
 * Return: Sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction of 2 numbers
 *
 * @a: First integer variable
 * @b: Second integer variable
 *
 * Return: Difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Product of 2 numbers
 *
 * @a: First integer variable
 * @b: Second integer variable
 *
 * Return: Product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division of 2 numbers
 *
 * @a: First integer variable
 * @b: Second integer variable
 *
 * Return: Result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Get remainder of the division of 2 numbers
 *
 * @a: First integer variable
 * @b: Second integer variable
 *
 * Return: Remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
