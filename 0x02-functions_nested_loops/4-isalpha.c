#include "main.h"

/**
 * _isapha-checks for alphabetic character
 * @c: 1 if c is a letter, 0 otherwise
 */

int_isalpha(int c);
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
