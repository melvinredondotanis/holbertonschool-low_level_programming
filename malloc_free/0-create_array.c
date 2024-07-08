#include "main.h"

/**
 * create_array - description of template
 * @size: input value
 * @c: input value
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr = (char *) malloc(sizeof(char) * size);

	if (!ptr || size == 0)
		return (NULL);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
