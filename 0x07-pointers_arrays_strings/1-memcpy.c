#include "main.h"
/**
 * _memcpy - function that copies memory area,
 * @src: source memory area
 * @dest: destination memory area
 * @n : number of bytes
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
		*(dest + l) = *(src + l);

	return (dest);
}
