#include "main.h"

/**
 * _memcpy - description of template
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
