#include "main.h"
/**
 * _strstr - locate a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 * Return: if the substring is located - a pointer to the beginning
 *         of the located substring.
 *         if the substring is not located - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int x;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		x = 0;
		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')
					return (haystack);
				x++;
			} while (haystack[x] == needle[x]);
		}
		haystack++;
	}
	return ('\0');
}
