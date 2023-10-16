#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This function prints the alphabet in lowercase
 * without -e and -q and return 0 to indicate successful execution.'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	putchar('\n');

	return (0);
}
