#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: number elements in array
 * @cmp: pointer to func to be used for comparison
 * Return: index of first search result that
 * does not return 0,
 * -1 if no match
 * -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, (*p)(int);
p = cmp;

if (size <= 0)
	return (-1);
if (!array || !cmp)
	return (-1);

for (i = 0; i < size; i++)
{
if (p(array[i]) && array[i] != 0)
	break;
if (i == size - 1)
	return (-1);
}
return (i);
}
