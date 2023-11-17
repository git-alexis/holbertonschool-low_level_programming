#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints numbers
 *
 * Description: 'This function prints numbers separated by
 * the string separator, followed by a new line and return nothing'
 *
 * @separator: Constant string variable
 * @n: Constant unsigned integer variable
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list print_arg;
	char *string_arg;

	va_start(print_arg, n);

	for (index = 0; index < n; index++)
	{
		string_arg = va_arg(print_arg, char *);

		if (string_arg != NULL)
		{
			printf("%s", string_arg);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && index < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(print_arg);
}
