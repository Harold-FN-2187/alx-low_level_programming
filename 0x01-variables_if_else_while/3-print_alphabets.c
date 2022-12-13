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
    char old;
    for (old = 'a'; old <= 'z'; old++)
        putchar(old);
    for (old = 'A'; old <= 'Z'; old++)
        putchar(old);
    putchar('\n');

    return (0);
}