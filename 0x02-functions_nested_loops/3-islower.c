#include "main.h"

/**
 * _islower - description below
 * Description: print alphabet lowercase
 * Return 1 if lowercase
 * @c : input integer
 * Return: 2 otherwise
*/
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
