#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dog
 * @d : struct to free
 * Return : nothing
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->owner);
free(d->name);
free(d);
}
}
