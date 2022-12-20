#include "main.h"

/**
 * puts_half - function that prints half of a string
 * followed by a newline
 * @str: input string
 * Return: nothing
 */
void puts_half(char *str)
{
	int leng = 0;
	int j, k;

	while (str[leng] != '\0')
		leng++;

	if (leng % 2 == 0)
		k = leng / 2;
	else
		k = (leng + 1) / 2;

	for (j = n; j < leng; j++)
		_putchar(str[j]);

	_putchar('\n');
}
