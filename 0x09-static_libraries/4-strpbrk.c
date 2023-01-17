#include "main.h"
/**
 * _strpbrk - searches astring for any of aset of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched
 * Return: if a set is matched - a pointer to the matched byte.
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
