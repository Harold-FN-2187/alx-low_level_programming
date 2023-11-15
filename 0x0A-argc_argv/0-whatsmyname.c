#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints its name, followed by a new line
 * @argc: count of command line arguments
 * @argv: array
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
}
