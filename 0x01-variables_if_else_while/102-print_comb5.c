#include <stdio.h>

/**
 * main -program that prints all possible combinations
 * of two two-digit numbers
 * Returns: 0 (Success)
 *
 */

int main(void)

{
	int n, m;
	int num1, num2;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (num1 = '0'; num1 <= '9'; num1++)
			{
				for (num2 = m + 1; num2 <= '9'; num2++)
				{
					putchar(n);
					putchar(m);
					putchar(' ');
					putchar(num1);
					putchar(num2);

					if (!((n == '9' && m == '8') && (num1 == '9' && num2 == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				num2 = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}

