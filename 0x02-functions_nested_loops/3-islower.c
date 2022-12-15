#include "main.h"

/*
 * description : To print alphabet in lowercase ten times
 * return 1 if lowercase
 * return 2 otherwise
 */

int _isloswer(int c)
{
	char i;
	int lower = 0;

	for ( i = 'a'; i <= 'z'; i++)
	{
		if(i == c)
			lower = 1;
	}
	
	return (lower);
}
