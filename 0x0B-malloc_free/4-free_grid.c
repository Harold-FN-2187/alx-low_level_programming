#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D grid previously created
 * @grid: grid to free
 * @height: number of rows in grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int k = 0;
while (j < height)
{
	free(grid[j]);
	j++;
}
free(grid);
}

