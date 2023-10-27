#include "main.h"
/**
 * aide - return square root of two numbers
 * @x: number
 * @y: test number
 * Return: square root
*/
int aide(int x, int y)
{
if (y * y > x)
	return (-1)
else if (y * y == x)
	return (y);
else
	return (aide(x, y + 1));
return (1);
}
