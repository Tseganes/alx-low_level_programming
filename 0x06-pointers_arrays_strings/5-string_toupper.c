#include "main.h"
/**
 * string_toupper -> converting any string to upper case
 * @a: character param
 * Return: string
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] = a[i] - 32;
		i++;
	}
	return (a);
}
