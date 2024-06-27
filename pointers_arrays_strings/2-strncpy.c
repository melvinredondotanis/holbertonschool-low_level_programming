#include "main.h"

/**
 * _strncpy - xxxxx
 * Description:xxxx
 * @dest: xxxx
 * @src: xxxxxx
 * @n: xxxx
 * Return: xxx
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((dest[i] || src[i]) && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
