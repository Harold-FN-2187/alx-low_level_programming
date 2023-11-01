#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of char
 * @size:  size of array
 * @c:  stored char
 * Return: pointer to char array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ar;

if (size == 0)
	return (NULL);

ar = malloc(sizeof(c) * size);

if (ar  == NULL)
	return (NULL);

for (i = 0; i < size; i++)
	ar
[i] = c;

return (ar);
}


