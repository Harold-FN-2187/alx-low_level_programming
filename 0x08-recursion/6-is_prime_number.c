#include "main.h"
/**
 * aid - tests if a number is prime
 * @x: number to check
 * @y: test numbers
 * Return: result of test
 */
int aid(int x, int y)
{
if (x <= 1 || x % y == 0)
	return (0);
else if (x == y)
	return (1);
else if (x > y)
	aid(x, y + 1);

return (1);
}

/**
 * is_prime_number - check if given intger is prime
 * @n: given integer
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (aid(n, 2));
}
