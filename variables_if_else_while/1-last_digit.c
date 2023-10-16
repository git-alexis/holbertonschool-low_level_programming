#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'This function prints a sample message wich specifies
 * if the last digit of a random nomber is greater than 5, is 0 or
 * is less than 6 and not zero. She return 0 to indicate successful execution.'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
