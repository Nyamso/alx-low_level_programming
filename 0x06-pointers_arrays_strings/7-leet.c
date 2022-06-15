#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @str: The string to be encoded
 * Return: A pointer
 */

char *leet(char *str)
{
	int text1 = 0, text2;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[text1])
	{
		for (text2 = 0; text2 <= 7; text2++)
		{
			if (str[text1] == leet[text2] ||
					str[text1] - 32 == leet[text2])
				str[text1] = text2 + '0';
		}
		text1++;
	}
	return (str);
}
