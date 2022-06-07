#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - a function that prints all natural numbers
 * @n: integer
 */


void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n, ", n);
		
	}
	
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n, ", n);
	}
}

