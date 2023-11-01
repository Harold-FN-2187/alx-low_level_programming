#include <stdio.h>
/**
 * main - prints all arguments that it receives
 * @argc: count of command line arguments
 * @argv: array
 * Return: 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
