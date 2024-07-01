#include "main.h"

/**
 * _strspn - description of template
 * @s: input value
 * @accept: input value
 * Return: c
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int k;

	while (s[i])
	{
		k = 1;
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				k = 0;
				break;
			}
			j++;
		}
		if (k == 1)
			break;
		i++;
	}

	return (i);
}
