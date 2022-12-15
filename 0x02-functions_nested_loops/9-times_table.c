#include "main.h"
/**
 * times_table - Description below
 * Description: To print the times table for 9
 * starting with 0
 * Return: Nothing.
 */
void times_table(void)
{
	int j, i, n;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if ((n / 10) == 0)
			{
				if (j != 0)
	
