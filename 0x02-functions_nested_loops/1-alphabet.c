#include "main.h"

/**
 * print_alphabet- prints all alphabets
 * Description: prints all alphabets in lowercase
 * Return: always zero (success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
