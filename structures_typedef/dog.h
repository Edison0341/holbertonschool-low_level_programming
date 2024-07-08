#ifndef "dog.h"
#define "dog.h"
/**
 * struct dog - structure for dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 */
typedef struct dog
{
char name;
float age;
char owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* dog.h */
