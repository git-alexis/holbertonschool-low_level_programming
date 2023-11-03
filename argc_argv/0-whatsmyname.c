#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This function prints its name followed by a new line
 * and return always 0 to indicate successful operation'
 *
 * argc: Integer variable
 * argv: Arrays of character
 *
 * Return: Always 0 (Success)
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
