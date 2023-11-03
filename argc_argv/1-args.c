#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This function prints the number of arguments passed into it
 * followed by a new line and return always 0 to indicate successful operation'
 *
 * @argc: Integer variable
 * @argv: Arrays of character
 *
 * Return: Always 0 (Success)
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
