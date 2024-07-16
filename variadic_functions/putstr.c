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
