#include "main.h"

/**
 * swap_int - swap 2 int
 * Description: swap the value of a and b
 * @a: first value
 * @b: second value
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
