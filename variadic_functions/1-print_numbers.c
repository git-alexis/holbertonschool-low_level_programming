#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 *
 * Description: 'This function prints numbers separated by
 * the string separator, followed by a new line and return nothing'
 *
 * @separator: Constant string variable
 * @n: Constant unsigned integer variable
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list print_arg;

	va_start(print_arg, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(print_arg, int));

		if (separator != NULL && index < n - 1)
		{
			printf("%s", separator);
		}
		else
		{
			printf("\n");
		}
	}

	va_end(print_arg);
}
