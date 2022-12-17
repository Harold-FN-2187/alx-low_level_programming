#include "main.h"

/**
 * print_square - Function that prints a square
 * with a newline
 * @size: an input
 * Return: 0
 */
void print_square(int size)
{
	int i;
	int t;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (t = 0; t < size; t++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

