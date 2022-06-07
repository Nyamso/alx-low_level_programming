#include "main.h"

/**
 * times_table - a function that prints the 9 times table,
 * starting with 0
 * Return: 0 (Success)
 */

void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{	
		for (column = 0; column <= 9; column++)
		{
			product = row * column;

			if (column == 0)
			{
				_putchar(product + '0');
			}
			else if (column <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (column > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
		
