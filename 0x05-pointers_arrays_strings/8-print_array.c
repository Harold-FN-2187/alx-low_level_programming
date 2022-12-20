#include "main.h"

/**
 * print_array - function that prints n elements from an array of integers
 * followed by a newline
 * @a: input array
 * @n: input integer
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int j = 0;

	for (; j < n; j++)
	{
		printf("%d", a[i]);
		if (j < n - 1)
			printf(", ");
	}
	putchar('\n');
}
