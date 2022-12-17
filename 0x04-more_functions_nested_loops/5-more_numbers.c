#include "main.h"
/**
 * more_numbers - Function that prints the number 0 to 14
 * ten times followed by a newline
 * Return: 0
 */

void more_numbers(void)
{
	int c = 0;
	int d = 0;

	for (; d < 10; d++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar(c / 10 + '0');

			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
