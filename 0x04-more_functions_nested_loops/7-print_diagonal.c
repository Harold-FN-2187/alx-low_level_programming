#include "main.h"

/**
 * print_diagonal - function to draw a diagonal line on the terminal.
 * @n: an input integer
 * Return: 0
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < 1; j++)
				_putchar(' ');
		_putchar(50);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
