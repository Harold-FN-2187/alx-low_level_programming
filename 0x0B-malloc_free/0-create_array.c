#include "main.h"
/**
 * create_array - create array of char
 * @size:  size of array
 * @c:  stored char
 * Return: pointer to char array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *cr;

if (size == 0)
	return (NULL)

cr = malloc(sizeof(c) * size);

if (cr  == NULL)
	return (NULL);

for (i = 0; i < size; i++)
	cr[i] = c;

return (cr);
}


