#include "main.h"
#include <stdio.h>

/**
 * main - print 1 to 100
 * multiples of three print Fizz
 * multiples of five print Buzz
 * multiples of both three and five print FizzBuzz
 * Return: 0
 */

int main(void)
{
	int n;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 5 == 0)
		{
			if (n == 100)
				printf("Buzz");
			else
				printf("\n");
		}
		else if (n % 3 == 0)
			printf("Fizz");
		else
			printf("%d", n);

		n++;
	}

	return (0);
}

