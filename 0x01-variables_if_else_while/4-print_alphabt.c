#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char new = 'a'

	for (new = 'a'; new <= 'z'; new++)
{
	if (new != 'q' && new != 'e')
{
	putchar(new);
}
	putchar('\n');
	return (0);
}
