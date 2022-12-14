include "main.h"

/**
 * description: Prints sign of a number
 * return 1 and print + if n is greater than 0
 * return 0 and prints 0 i n is zero
 * return -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	int val;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if ( n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value)
}
