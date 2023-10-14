#include <stdio.h>
/**
 * main - print all numbers in base 16 in lowercase
 *
 * Return: 0 indicating success
 */

int main(void)
{
	int p;

	for (p = 48; p < 58; p++)
	{
		putchar(p);
	}
	for (p = 97; p < 103; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}

