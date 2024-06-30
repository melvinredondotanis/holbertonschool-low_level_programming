#include "main.h"
#include <unistd.h>

/**
 * print_number - prints integers enters as parameters using putchar
 * @n: integer to print
 * Return: void
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
			_putnbr(n / 10);
			_putnbr(n % 10);
		}
		else
			_putchar('0' + n);
	}
}
