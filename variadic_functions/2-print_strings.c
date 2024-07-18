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

	if (!str)
	{
		putstr("(nil)");
		return;
	}
	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * print_strings - print strings
 * Description: function for printing stings
 * @separator: string input
 * @n: number of strings
 * Return: range of string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;


	va_start(args, n);

	while (i < n)
	{
		str = va_arg(args, char *);
		putstr(str);
		if (i + 1 != n && separator)
			putstr(separator);
		i++;
	}
	_putchar('\n');
	va_end(args);
}
