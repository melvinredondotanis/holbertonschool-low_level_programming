#include "dog.h"

/**
 * print_dog - Prints all the data of a dog
 * @d: A dog structure
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d)
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
