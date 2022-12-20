#include "main.h"

/**
 * _strlen - function that returns length of a string
 * @s: input string
 * Return: nothing
 */
int _strlen(char *s)
{
	int leng = 0;

	while (s[leng] != '\0')
		leng++;
	return (leng);
}

