#include <unistd.h>
/**
 * _putchar - write the character
 * @c: the character
 *
 * Return: on success
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}			
