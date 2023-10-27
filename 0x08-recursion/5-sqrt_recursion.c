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
	return (-1);
else if (y * y == x)
	return (y);
else
	return (aide(x, y + 1));
return (1);
}
/**
 * _sqrt_recursion - return natural square root
 * @n: given number
 * Return: return square root
 */
int _sqrt_recursion(int n)
{
if (n == 0)
	return (0);
return (aide(n, 1));
}
