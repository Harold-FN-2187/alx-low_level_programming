#include "main.h"

/**
 * rev_string - function that reverse a string
 * followed by a newline
 * @s: an input string
 * Return: nothing
 */
void rev_string(char *s)
{
	int leng = 0;
	int j = 0;
	char swa;

	while (s[leng] != '\0')
		leng++;


	while (j < len--)
	{
		swa = s[j];
		s[j++] = s[leng]
		s[leng] = swa;
	}
}

