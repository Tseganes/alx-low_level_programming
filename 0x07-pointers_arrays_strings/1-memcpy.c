#include "main.h"
#include <string.h>
/**
 * _memcpy - copies @n bytes from the memory area ponted
 * to by @src into taht pointed to by @dest
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src
 * Return: pointer to destination buffer @dest         
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}
