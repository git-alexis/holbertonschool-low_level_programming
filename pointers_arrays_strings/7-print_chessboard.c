#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - 1337 coding
 *
 * Description: 'This function changes a certain character into a number :
 * A and a to 4, E and e to 3, O and o to 0, T and t to 7, L and l to 1 .
 * She return the encoded string'
 *
 * @a: Pointer of character variable
 *
 * Return: Encoded string (s)
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
