#include <stdio.h>
/*
 * main - program to print all numbers of base 16 in lowercase
 *
 * return - alway 0 indicating success
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
	putchar('/n');
	return (0);
}

