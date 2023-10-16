#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This function prints the alphabet in lowercase
 * then in uppercase and return 0 to indicate successful
 * execution.'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
