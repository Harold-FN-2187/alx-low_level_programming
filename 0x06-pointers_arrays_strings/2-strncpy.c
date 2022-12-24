#include "main.h"
/**
 * _strncpy - function that copies strings
 * @dest: input string
 * @src: input string
 * @n: input integer
 * Return: pointer to the string that results
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srcleng = 0, i = 0;
	char *temp = dest;
	char *start = src;

	while (*src)
	{
		srcleng++;
		src++;
	}

	srcleng++;

	if (n > srcleng)
		n = srcleng;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
