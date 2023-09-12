#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initiializing a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: initializing name
 * @age: initializing age
 * @owner: initializing owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
