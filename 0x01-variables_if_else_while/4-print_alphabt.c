#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char new, one, two;

one = 'e';
two = 'q';

	for (new = 'a'; new <= 'z'; new ++)
{
        if (new != one &&new != two)
        putchar(new);
}
putchar('\n');

return (0);
}
