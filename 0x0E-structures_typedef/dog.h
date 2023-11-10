#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - describes the dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the
 */

struct dog
{
char *name;
float age;
char *owner;
};
/**
 * typedef dog_t - defines new name for struct dog type
 */

typedef struct dog dog_t;
int _putchar (char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

