#include <stdio.h>
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
		prinf("%s\n", argv[i]);
}
