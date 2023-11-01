#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success, 1 if Error
 */
int main(int argc, char *argv[])
{
int n;
int m;
int diff;
if (argc != 3)
{
printf("Error\n");
return (1);
}
n = atoi(argv[1]);
m = atoi(argv[2]);
diff = n  *m;

printf("%i\n", diff);
return (0);
}

