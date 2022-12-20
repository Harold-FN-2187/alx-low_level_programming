#include "main.h"

/**
 * puts2 - a function that prints every character of a string
 * starting from the first, followed by a newline
 * @str: input string
 * Return: nothing
 */
void puts2(char *str)
{
	int leng = 0;
	int j = 0;

	while (str[leng] != 0)
		leng++;

	leng -= 1;

	for (; j <= leng; j += 2)
		_putchar(str[j]);

	_putchar('\n');
}
