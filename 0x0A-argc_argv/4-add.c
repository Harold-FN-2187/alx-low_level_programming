#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if ERROR, 0 if nothing is passed
 */
int main(int argc, char *argv[])
{
int f, g;
int n = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}
for (f = 1; f < argc; f++)
{
for (g = 0; argv[f][g] != '\0'; g++)
{
if (argv[f][g] < '0' || argv[f][g] > '9')
{
printf("Error\n");
return (1);
}
}
n += atoi(argv[c]);
}
printf("%d\n", n);
return (0);
}

