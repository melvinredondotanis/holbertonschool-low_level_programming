#include "main.h"

/**
 * _strcat - xxxxx
 * Description:xxxx
 * @dest: xxxx
 * @src: xxxxxx
 * Return: xxx
 */

char *_strcat(char *dest, char *src)
{
	int i =  0;
	int size_dest = 0;

	while (dest[size_dest] != '\0')
		size_dest++;
	while (src[i])
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}
