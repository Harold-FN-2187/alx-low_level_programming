#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @b : constant byte
 * @s :  memory area to be filled
 * @n : integer indicating number of bytes
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
{
	*(s + k) = b;
}
	return (s);
}
