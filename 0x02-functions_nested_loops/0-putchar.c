#include "main.h"
/**
 * _putchar - Writes a character to standard output
 * @c : input integer
 * Return: 1 always success
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
