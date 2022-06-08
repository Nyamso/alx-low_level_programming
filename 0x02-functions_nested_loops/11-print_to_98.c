#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers
 * @n: integer
 */


void print_to_98(int n)
{
	int num1, num2;

	if (n <= 98)
	{
		for (num1 = n; num1 <= 98; num1++)
		{
			if (num1 != 98)
				printf("%d, ", num1);
			else if (num1 == 98)
				printf("%d\n", num1);
		}
	}
	if (n >= 98)
	{
		for (num2 = 0; num2 >= 98; num2--)
		{
			if (num2 != 98)
				printf("%d, ", num2);
			else if (num2 == 98)
				printf("%d\n", num2);
		}
	}
}

