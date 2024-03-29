#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main func
 * @argc: argument counter
 * @argv: array of arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{

	int a, b, c;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = (*p)(a, b);

	printf("%d\n", c);
	return (0);
}
