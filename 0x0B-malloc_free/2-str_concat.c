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
}
