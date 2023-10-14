#include <stdio.h>
/*
 * main - Prints single digit numbers of base 10
 *
 * Return:  always 0 indicating success
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
