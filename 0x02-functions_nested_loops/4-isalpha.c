#include "main.h"

/**
*_isalpha - description below 
* Desciription: return 1 if c is a letter, lowercase or uppercase
* Return 0 otherwise
*/

int _isalpha(int c)
{

	char lower;
	int isLetter = 0;
	char upper;

	for (lower = 'a'; lower <= 'z';lower++)
	{
		for (upper='A'; upper <= 'Z'; upper++)
		{
			if (c == upper || c == lower)
				isLetter = 1;
		}
	}
	return (isLetter);
}
