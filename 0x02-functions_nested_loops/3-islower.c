#include "main.h"

/*
 * is_lower - description below
 * Description : To print alphabet in lowercase ten times
 * return 1 if lowercase
 * return 2 otherwise
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
