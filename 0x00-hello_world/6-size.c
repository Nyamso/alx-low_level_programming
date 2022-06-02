#include <stdio.h>

/**
 * this is a program
 * that prints the size of various
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(longint));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longlongint));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}
