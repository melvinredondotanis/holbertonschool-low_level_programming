#include "main.h"

/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */

void print_number(int n)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
		}
		if (n > 9)
		{
			print_number(n / 10);
			print_number(n % 10);
		}
		else
			_putchar('0' + n);
	}
}
