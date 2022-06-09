#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: numbers
 */

void print_line(int n)
{
	int line = n;

	for (line = n; line > 0; line--)
		_putchar('_');

	_putchar('\n');
}
