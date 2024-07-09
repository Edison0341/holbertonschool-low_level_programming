#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function that frees dogs
 * @d: struct dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name)
		free(d->name);

	if (d->owner)
		free(d->owner);

	free(d);

}
