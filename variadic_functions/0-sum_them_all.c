#include <stdarg.h>

/**
 * sum_them_all - Sum of numbers
 *
 * Description: 'This function searches for an integer by executi'
 *
 * @n: Constant unsigned integer variable
 *
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int index;
	va_list sum_arg;

	if (n == 0)
	{
		return (0);
	}

	va_start(sum_arg, n);

	for (index = 0; index < n; index++)
	{
		sum = sum + va_arg(sum_arg, int);
	}

	va_end(sum_arg);
	return (sum);
}
