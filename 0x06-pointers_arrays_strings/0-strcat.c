#include "main.h"
/**
 * _strcat - Function that concatenates two strings
 * @src: input string
 * @dest: input string
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ == *src++;

	*dest = '\0';
	return (temp);
}
