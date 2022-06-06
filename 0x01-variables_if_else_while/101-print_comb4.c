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
		for (o = '0'; o <= '9'; o++)
		{
			for (m = (0 + 1); m <= '9'; m++)
			{
				for (n = (m + 1); n <= '9'; n++)
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

