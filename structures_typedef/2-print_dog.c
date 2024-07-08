#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: dog struc
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		return (NULL);
	if (d->owner == NULL)
		return (NULL);

	printf("name: %s\n", d->name);
	printf("age: %f\n", d->age);
	printf("owner: %s\n", d->owner);
}
