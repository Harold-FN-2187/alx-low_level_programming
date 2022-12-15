#include "main.h"

/**
 * n: an input
 * print_sign - description below
 * Description: Prints sign of a number
 * return 1 and print + if n is greater than 0
 * return 0 and prints 0 i n is zero
 * return -1 and prints - if n is less than zero
 * Return: 1 if positive, 0 if 0, -1 if negative
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
