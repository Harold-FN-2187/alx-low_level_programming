#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to newly allocated space in memory
 * which contains a copy of the string give as a parameter
 * @str: string to cop
 * Return: pointer to duplicated string,
 * NULL if @str is NULL or insufficent memory
*/
char *_strdup(char *str)
{
char *ar;
unsigned int i, j;
i = 0;
j = 0;

if (str == NULL)
return (NULL);
while (str[i])
i++;

ar = malloc(sizeof(char) * (i + 1));

if (ar == NULL)
return (NULL);
while (str[j])
{
ar[j] = str[j];
j++;
}

ar[j + 1] = 0;
return (ar);
}
