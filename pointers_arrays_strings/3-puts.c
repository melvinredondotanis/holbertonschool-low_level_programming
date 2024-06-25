#include "main.h"

/**
 * _puts - print strings
 * Description: function for printing stings
 * @str: string input
 * Return: range of string
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
