#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1 - first string
 * @s2 - second string
 * @n : number of bytes
 * Return: allocated space, NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ar;
unsigned int i  = 0, j = 0;
unsigned int n, p, k = 0;
unsigned int len;
if (s1 == NULL)
	s1 = ""
if (s2 == NULL)
	s2 = ""
while (s1[i])
	i++;
while (s2[i])
	j++;

