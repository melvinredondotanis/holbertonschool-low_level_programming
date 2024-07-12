#include "dog.h"

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

	ptr = (char *)malloc(sizeof(char) * i + 1);

	if (!ptr)
		return (NULL);

	while (k <= i)
	{
		ptr[k] = str[k];
		k++;
	}

	return (ptr);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == 0 || name == 0 || owner == 0)
		return (0);

	new_dog->name = _strdup(name);
	if (new_dog->name == 0)
	{
		free(new_dog);
		return (0);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == 0)
	{
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
