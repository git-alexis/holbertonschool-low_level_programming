#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This function prints the name of the file
 * it was compiled from, followed by a new line and return
 * always 0 to indicate successful operation'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
