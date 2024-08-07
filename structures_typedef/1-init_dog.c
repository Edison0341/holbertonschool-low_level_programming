#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable to type struct dog
 * @d: dog struc
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
