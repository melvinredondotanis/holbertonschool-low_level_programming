#include "variadic_functions.h"

/**
 * putstr - print strings
 * Description: function for printing stings
 * @str: string input
 * Return: range of string
 */
void putstr(const char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * print_strings - prints strings entered as parameters using putchar
 * @separator: string to be printed between strings
 * @n: number of strings to print
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	while (i < n)
	{
		putstr(va_arg(args, char*));
		if (i + 1 != n && separator)
			putstr(separator);
		i++;
	}
	_putchar('\n');
	va_end(args);
}
