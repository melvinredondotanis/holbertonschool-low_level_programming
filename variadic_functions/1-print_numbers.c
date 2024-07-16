#include "variadic_functions.h"

/**
 * print_number - prints unsigned integers enters as parameters using putchar
 * @n: unsigned integer to print
 * Return: void
 */
void print_number(int n)
{
	int i, j, digit, digits, power;
	unsigned int temp, numchar, number;

	digit = 0;
	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
	{
		temp = n;
	}

	number = temp;

	while (number >= 10)
	{
		number = number / 10;
		digit++;
	}
	digits = digit + 1;
	power = 1;
	i = 1;

	while (i < digits)
	{
		power = power * 10;
		i++;
	}
	j = power;
	while (j >= 1)
	{
		numchar = (temp / j) % 10;
		_putchar(numchar + '0');
		j = j / 10;
	}
}

/**
 * print_numbers - prints numbers separated by a separator
 * @separator: string to be printed between numbers
 * @n: number of integers to print
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	while (i < n)
	{
		print_number(va_arg(args, unsigned int));
		if (i + 1 != n && separator)
			putstr(separator);
		i++;
	}
	_putchar('\n');
	va_end(args);
}
