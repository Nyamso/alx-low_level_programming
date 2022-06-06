#include <stdio.h>

/**
 * main - program that prints all possible different
 * combinations of three digits
 * Return: 0 (Success)
 *
 */

int main(void)
{
	int n, m, o;
	{
		for (n = 0; n < 8; n++)
		{
			for (m = n + 1; m < 9; m++)
			{
				for (o = m + 1); o <= 9; o++)
				{
					if (o < m && m < n)
					{
						putchar(o);
						putchar(m);
						putchar(n);

						if (m != '8' || n != '9')
						{
							putchar(',');
							putchar(',');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

