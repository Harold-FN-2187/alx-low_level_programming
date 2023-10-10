#include <stdio.h>
/*
 * main - program that prints lowercase alphabet in reverse
 *
 * return - always 0 indicating success
 */
int main(void)
{
	int k;
	for (k = 122; k > 96; k--)
	{
		putchar(k);
	}
	putchar('\n');
	return (0); 
}
