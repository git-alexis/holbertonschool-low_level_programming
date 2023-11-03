#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This function prints all arguments it receives with
 * a new line and return always 0 to indicate successful operation'
 *
 * @argc: Integer variable
 * @argv: Arrays of character
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
