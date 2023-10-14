#include <stdio.h>
/**
 * main - prints lowercase alphabet in reverse
 *
 * Return: 0 indicating success
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
