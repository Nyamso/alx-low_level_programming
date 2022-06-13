#include "main.h"

/**
 * _strlen - a function that prints length of a string
 * @s: The length of the string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		++s;
	}
	return (len);
}

/**
 * rev_string - a function that reverses a string.
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char tmp;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++, j--;
	}
}

