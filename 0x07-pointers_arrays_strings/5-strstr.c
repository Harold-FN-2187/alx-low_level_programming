#include "main.h"
/**
 * _strstr - find first occurrence of substring needle in string haystack
 * @needle: substring to search for
 * @haystack: string to be searched in
 * Return: pointer
*/

char *_strstr(char *haystack, char *needle)
{
char *pneedle;
char *bhaystack;
while (*haystack != '\0')
{
	bhaystack = haystack;
	pneedle = needle;

	while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
	{
		haystack++;
		pneedle++;
	}
	if (!*pneedle)
		return (bhaystack);
	haystack = bhaystack + 1;
}
return (0);
}