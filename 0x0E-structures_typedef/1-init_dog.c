#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog
 * @name: pointer to the dog name
 * @age: dog age
 * @owner: pointer to dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* allocate memory for name and owner */
	d->name = malloc(strlen(name) + 1);
	d->name = malloc(strlen(owner) + 1);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
