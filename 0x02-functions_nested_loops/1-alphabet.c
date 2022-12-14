#include "main.h"

/*
 * main - entry point
 *
 * description: to print all alphabets
 * return: always zero (success)
 */

void print_alphabet(void)
{
	char i;

	for(i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
