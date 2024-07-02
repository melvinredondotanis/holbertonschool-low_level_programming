#include "main.h"

/**
 * factorial - description of template
 * @n: input value
 * Return: x
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
