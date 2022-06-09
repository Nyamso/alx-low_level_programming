#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: lines to draw
 */

void print_diagonal(int n)
{
	int draw;
	int line;

	if (n > 0)
	{
		for (draw = 1; draw <= n; draw++)
		{
			for (line = 1; line < draw; line++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
