#include "main.h"

/**
*print_alphabet: 
*
*Description: To print all alphabets
*
*Return: always zero (success)
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
