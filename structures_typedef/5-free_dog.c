#include "dog.h"

/**
 * free_dog - ...
 * @d: ...
 *
 * Return: ...
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
