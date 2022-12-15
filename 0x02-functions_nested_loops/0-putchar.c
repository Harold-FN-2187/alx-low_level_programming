#include "main.h"
/**
 * _putchar - Writes a character to standard output
 * Returns: 1 (On success)
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
