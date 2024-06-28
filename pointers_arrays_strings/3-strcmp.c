#include "main.h"

/**
 * _strcmp - check the code
 * @s1: dfdg
 * @s2: dfdfdf
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int difference = 0;

	while (s1[i])
	{
		difference = s1[i] - s2[i];
		if (difference != 0)
			return (difference);
		i++;
	}
	return (difference);
}