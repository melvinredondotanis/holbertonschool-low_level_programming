#include "main.h"

/**
 * _print_rev_recursion - description of template
 * @s: input value
 * Return: x
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
