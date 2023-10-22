#include <stdio.h>

/**
 * main - List 1 to 100
 *
 * Description: 'This function prints 1 to 100 or Fizz (if % 3),
 * or Buzz (if % 5), or FizzBuzz (if % 3 and 5) and return 0
 * to indicate successful execution'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	printf("1");
	for (num = 2; num <= 100; num++)
	{
		printf(" ");
		if ((num % 5 == 0) && (num % 3 == 0))
		{
			printf("FizzBuzz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", num);
		}
	}
	printf("\n");
	return (0);
}
