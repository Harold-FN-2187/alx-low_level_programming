#include "main.h"

/**
 * binary_to_uint - conv binary number to unsigned integer
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number,
 * OR if b is null or contains chars not 1 or 0, ret 0
 */


unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
unsigned int mult = 1;
int len;

if (!b)
	return (0);
    /*return 0 if b is null*/
for (len = 0; b[len];)
	len++;
for (len -= 1; len >= 0; len--)
{
if (b[len] != '0' && b[len] != '1')
	return (0);
num += (b[len] - '0') * mult;
mult *= 2;
}
return (num);
}
