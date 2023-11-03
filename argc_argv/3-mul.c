#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'This function multiplies two numbers, print the result
 * with a new line and return 0 to indicate successful operation or
 * print Error and return 1 when there's a problem'
 *
 * @argc: Integer variable
 * @argv: Arrays of character
 *
 * Return: 0 or 1 (Success or Error)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
