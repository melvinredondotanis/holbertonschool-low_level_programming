#include "main.h"

/**
 * _strncat - xxxxx
 * Description:xxxx
 * @dest: xxxx
 * @src: xxxxxx
 * @n: xxxx
 * Return: xxx
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int size_dest = 0;

	while (dest[size_dest] != '\0')
		size_dest++;
	while (src[i] && i < n)
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}
