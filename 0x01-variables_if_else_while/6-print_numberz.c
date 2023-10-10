#include <stdio.h>
/*
 * main - program that prints single digit numbers of base 10
 *
 * return - always 0 indicating succes
 */
int main(void)
{
	int q;
	for (q = 48; q < 58; q++)
	{
		putchar(q);
	}
	putchar('\n');
	return (0);
}
