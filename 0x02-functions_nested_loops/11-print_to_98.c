#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - a function that prints all natural numbers
 * @n: integer
 */


void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n++;
	}
	
	while (n < 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
		printf("%d", n);

		printf("\n");
}

