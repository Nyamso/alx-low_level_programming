#include "main.h"
#include <unistd.h>

/**
 * _putchar - prototype of the function
 * @c: character
 * Returns: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
