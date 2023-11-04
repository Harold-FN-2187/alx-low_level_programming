#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates array of integers
 * @min: smallest integer in array
 * @max: largest integer in array
 * Return: NULL if min > max, malloc fails,
 * pointer to created array
 */
int *array_range(int min, int max)
{
int *ar, i, j = 0;
if (min > max)
	return (NULL)
ar = malloc(sizeof(int) * (max - min + 1));
if (ar == NULL)
	return (NULL);

for (i  = min; i <= max; i++)
{
ar[j] = i;
j++
}
return (ar)
}
