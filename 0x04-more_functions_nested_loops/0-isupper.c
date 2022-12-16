#include "main.h"

/**
 * _isupper - Checks for uppercase character.
 * @c: input character
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	int isuppper = 0;
	char uppercase = 'A';

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}

