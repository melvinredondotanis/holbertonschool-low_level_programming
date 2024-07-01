#include "main.h"

/**
 * _strchr - description of template
 * @s: input value
 * @c: input value
 * Return: c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return (NULL);
}
