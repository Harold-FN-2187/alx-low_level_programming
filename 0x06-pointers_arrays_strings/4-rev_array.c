#include "main.h"

/**
 * reverse_array - function that reverses an array
 * @a: input array;
 * @n: number of elements in array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int  i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[1];
		a[i++] = a[n];
		a[n] = aux;
	}
}
