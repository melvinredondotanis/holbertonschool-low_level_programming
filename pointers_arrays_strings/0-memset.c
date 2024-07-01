#include "main.h"

/**
 * _memset - description of template
 * @s: input value
 * @b: input value
 * @n: input value
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

