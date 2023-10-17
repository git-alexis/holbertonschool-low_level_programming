#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This function prints the numbers from 0 to 9
 * with a comma and a space and return 0 to indicate
 * successful execution'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
		if (number < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
