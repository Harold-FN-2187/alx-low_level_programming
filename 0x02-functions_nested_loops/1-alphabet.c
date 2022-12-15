#include "main.h"

/**
*main - entry point 
*print_alphabet: description made below
*Description: to print all alphabets
*Return: always zero (success)
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
