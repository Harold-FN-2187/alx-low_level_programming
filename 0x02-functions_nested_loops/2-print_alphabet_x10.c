#include "main.h"

/**
 * print_alphabet_x10 - chech main.h
 * Description: print alphabet 10 times
 * Return: Nothing is returned.
 */

void print_alphabet_x10(void)
{
	char t;
	int f;

	for (f = 0; f <= 9; f++)
	{
		for (t = 'a'; t <= 'z'; t++)
			_putchar(t);
		_putchar('\n');
	}
}
