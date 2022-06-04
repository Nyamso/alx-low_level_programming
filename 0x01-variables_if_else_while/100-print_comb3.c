#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 * Return: 0 (Success)
 *
 */

int main(void)
{
	int m, n;

	for(n = '0'; n <= '9'; n++)
	{
		for ( m = ( n + 1); m <= '9'; m++)
		{
			putchar(n);
			putchar(m);

			if (n != '8' || m != '9') 
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
