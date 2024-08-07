#include "main.h"

/**
 * _pow_recursion - description of template
 * @x: input value
 * @y: input value
 * Return: x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y != 0)
		return (x * _pow_recursion(x, --y));
	return (1);
}
