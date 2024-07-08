#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - duplicate a string
 * @s: strings to duplicate
 * Return: pointer to the new string
 */

char *_strdup(char *s)
{
	int i, j;
	char *str;

	if (s == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
		;

	str = malloc(sizeof(char) * (i + 1));

	if (str == NULL)
		return (NULL);

	for (j = 0; s[j] != '\0'; j++)
		str[j] = s[j];

	str[j] = '\0';

	return (str);
}

/**
 * new_dog - creates a new dog struct
 * @name: name of the dog
 * @age: age of dog
 * @owner: name of the owner
 * Return: pointer to dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}

