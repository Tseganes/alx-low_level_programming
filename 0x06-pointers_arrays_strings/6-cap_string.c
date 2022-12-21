#include "main.h"

/**
 * *cap_string -> a function that capitalizes all words
 * @b: character param
 * Return: character
 */
char *cap_string(char *b)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' };
	int len = 13;
	int a = 0, i;

	while (b[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || b[a - 1] == spc[i]) && (b[a] >= 97 && b[a] <= 122))
				b[a] = b[a] - 32;
			i++;
		}
		a++;
	}
	return (b);
}

