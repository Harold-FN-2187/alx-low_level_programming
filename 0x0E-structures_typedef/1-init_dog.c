#include "main.h"

/**
 * init_dog - initializes a variable of type
 * struct_dog
 * @d : structure to initialize
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL;
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

