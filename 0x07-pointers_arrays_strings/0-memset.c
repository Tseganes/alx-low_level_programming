#include "main.h"
/**
 * _memset -> this memory set function
 * @s: A pointer to the memory area to be filled
 * @b: The character to fill the memory area with
 * @n: The number of bytes to be filled
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
