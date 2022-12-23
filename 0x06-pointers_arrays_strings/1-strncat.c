#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @src: input string
 * @dest: input string
 * @n: input integer
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int srcleng = 0;
	int i = 0;
	char *temp = dest;
	char *start = src;

	while (*src)
	{
		srcleng++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srcleng)
		n = srcleng;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
