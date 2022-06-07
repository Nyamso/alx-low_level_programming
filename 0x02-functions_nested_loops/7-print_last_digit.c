#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: the last digit
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit < 0)
		digit *= -1;

	_putchar(digit + '0');

	return (digit);
}
