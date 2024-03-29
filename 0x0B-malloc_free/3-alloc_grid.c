#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: NULL on failure, if @width of @height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
int **ar;
int i;
int j;
int k;

if (width <= 0 || height <= 0)
	return (NULL);

ar = malloc(sizeof(int *) * height);
if (ar == NULL)
	return (NULL);

for (i = 0; i < height; i++)
{
ar[i] = malloc(sizeof(int) * width);
if (ar[i] == NULL)
{
	while (i >= 0)
{
	free(ar[i]);
	i--;
}
	return (NULL);
}
}
for (j = 0; j < height; j++)
{
	for (k = 0; k < width; k++)
		ar[j][k] = 0;
}
return (ar);
}

