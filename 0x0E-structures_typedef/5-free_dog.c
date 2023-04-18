#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function to free allocated memory
 * @d: struct to free
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
