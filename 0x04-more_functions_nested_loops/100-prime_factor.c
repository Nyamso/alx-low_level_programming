#include <math.h>
#include <stdio.h>

/**
 * main - print largest prime factor
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	long factor;

	for (factor = 2; factor <= sqrt(num); factor++)
	{
		if (num % factor == 0)
		{
			num = num / factor;
			factor = 1;
		}
	}

	printf("%ld\n", num);

	return (0);
}
