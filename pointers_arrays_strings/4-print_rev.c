#include "main.h"

/**
 * print_rev - print strings in reverse
 * Description: function for printing stings in reverse
 * @s: string input
 * Return: range of string
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
