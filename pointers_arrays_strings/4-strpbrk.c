#include "main.h"

/**
 * _strpbrk - description of template
 * @s: input value
 * @accept: input value
 * Return: c
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}

	return (0);
}
