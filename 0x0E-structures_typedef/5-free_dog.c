#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - write a function that frees dog
 * @d: struct dog
 *
 * Return: Success
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
