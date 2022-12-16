#include "main.h"

/**
 * _isdigit - checks if input is a digit
 * @c: An input
 * Return: 1 if a digit or 0 otherwisse
 */
int _isdigit(int c)
{
	char t = '0';
	int isdigit = 0;

	for (; t <= '9'; t++)
	{
		if (t == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
