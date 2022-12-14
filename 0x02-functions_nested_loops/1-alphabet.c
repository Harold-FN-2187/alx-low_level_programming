#include "main.h"

/*
 * main - entry point
 *
 * return: always zero (success)
 */

void print_alphabet(void)
{
	char i;

	for(i='a';i <= 'z'; i++)
		_putchar(i);
	_putchar('\');
}
