#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Writing a fxn that initializes a variable of type struct dog
 * @d: The initializing pointer to struct dog
 * @name: Initializing name
 * @age: The initializing age
 * @owner: The initializing owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
