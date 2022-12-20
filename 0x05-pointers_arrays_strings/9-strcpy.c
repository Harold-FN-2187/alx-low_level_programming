#include "main.h"
/**
 * _strcpy - function that copies the string pointed to,
 * including the terminating null byte
 * @dest: pointer to destination
 * @src: pointer to source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
