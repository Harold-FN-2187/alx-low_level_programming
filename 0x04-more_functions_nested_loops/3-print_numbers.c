#include "main.h"

/**
 * print_numbers - Function to print integers 0 to 9
 * followed by a newline
 * Return: o
 */
void print_numbers(void)
{
	int g = 0;

	for (; g <= '9'; g++)
		_putchar(g);
	_putchar('\n');
}

