#include "main.h"

/**
 * swap_int - function that swaps values of two integers
 * @a: input integer pointer
 * @b: input integer pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int swa;

	swa = *a;
	*a = *b;
	*b = swa;
}
