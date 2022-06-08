#include <stdio.h>

/**
 * main - a program that finds and prints
 * the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
	int even_num = 0;
	int sun = 1;
	int a = 1;
	int b = 1;

	while ( b < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;

		if ((sum <= 4000000) && (sum % 2 == 0))
			even_num += sum;
	}

	_putchar("%d\n", even_num);

	return (0);
}

	
