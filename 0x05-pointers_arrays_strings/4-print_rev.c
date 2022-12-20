#include "main.h"

/**
 * print_rev - function that prints string in reverse
 * @s: input string
 * Return: nothing
 */
void print_rev(char *s)
{
	int leng = 0;

	while (s[leng]  != '\0')
		leng++;

	while (leng)
		_putchar(s[--leng]);

	_putchar('\n');
}
