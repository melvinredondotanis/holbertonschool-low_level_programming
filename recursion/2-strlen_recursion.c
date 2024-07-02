#include "main.h"

/**
 * _strlen_recursion - description of template
 * @s: input value
 * Return: x
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(++s) + 1);
}
