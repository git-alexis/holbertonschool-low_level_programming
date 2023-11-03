#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 *
 * Description: 'rty'
 *
 * @str: array str
 *
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
	unsigned int index;

	for (index = 0; index < strlen(str); index++)
	{
		if (!isdigit(str[index]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - Entry point
 *
 * Description: 'This function calculates the sum of numbers,
 * print the result with a new line and return 0 to indicate 
 * successful operation or print Error and return 1 when there's a problem'
 *
 * @argc: Integer variable
 * @argv: Arrays of character
 *
 * Return: 0 or 1 (Success or Error)
 */

int main(int argc, char *argv[])
{
	int index;
	int num;
	int result = 0;

	for (index = 1; index < argc; index++)
	{
		if (check_num(argv[index]))
		{
			num = atoi(argv[index]);
			result = result + num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
