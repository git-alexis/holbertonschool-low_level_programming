#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This function prints the hexadecimal code and return
 * 0 to indicate successful execution.'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char number;
	char letter;

	for (number = '0'; number <= '9'; number++)
		putchar(number);

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
