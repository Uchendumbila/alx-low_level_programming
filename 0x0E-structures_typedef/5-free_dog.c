#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Writing a fxn that free memory allocated for a struct dog
 * @d: The struct dog to be freed
 *
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
