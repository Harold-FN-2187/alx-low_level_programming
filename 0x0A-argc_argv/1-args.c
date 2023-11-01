#include <stdio.h>
/**
 * main - prints number of arguments passed to it
 * @argc: count of arguments
 * @argv: array
 * Return: 0
*/
int main(int argc, char *argv[] __attribute_((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
