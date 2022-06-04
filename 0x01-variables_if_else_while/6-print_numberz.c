#include <stdio.h>

/**
 * main - program that prints all single digit numbers
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
