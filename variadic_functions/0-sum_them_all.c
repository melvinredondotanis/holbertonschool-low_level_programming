#include "variadic_functions.h"

/**
 * sum_them_all - sum all the parameters
 * @n: number of parameters
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int total = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (i < n)
	{
		total += va_arg(args, int);
		i++;
	}

	va_end(args);
	return (total);
}
