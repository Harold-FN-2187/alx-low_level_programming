#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: function to send name to
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
	return;
f(name);
}
