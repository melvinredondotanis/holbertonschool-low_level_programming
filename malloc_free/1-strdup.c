#include "main.h"

/**
 * _strdup - description of template
 * @str: input value
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int k = 0;
	char *ptr;

	if (!str)
		return (NULL);

	while (str[i])
		i++;

	ptr = (char *) malloc(sizeof(char) * i + 1);

	if (!ptr)
		return (NULL);

	while (k <= i)
	{
		ptr[k] = str[k];
		k++;
	}

	return (ptr);
}
