#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer, return NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
char *s3;
unsigned int str1len = 0;
unsigned int str2len = 0;
unsigned int str3len;
unsigned int i, j;
i = 0;
j = 0;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[str1len])
	str1len++;
while (s2[str2len])
	str2len++;

str3len = str1len + str2len;

s3 = malloc(sizeof(char) * str3len + 1);
if (s3 == NULL)
	return (NULL);
while (i < str1len)
{
s3[i] = s1[i];
i++;
}
while (i <= str3len)
{
s3[i] = s2[j];
i++;
j++;
}
return (s3);
}
