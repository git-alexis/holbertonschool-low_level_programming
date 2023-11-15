#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: Integer variable
 * @argv: Char array
 *
 * Return: Difference
 */


int main(int argc, char *argv[])
{
	int a, b;
	int (*operateur)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	operateur = get_op_func(argv[2]);

	if (operateur == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operateur(a, b));
	return (0);
}
