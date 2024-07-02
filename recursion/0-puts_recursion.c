#include "main.h"

/**
 * _puts_recursion - description of template
 * @s: input value
 * Return: x
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
