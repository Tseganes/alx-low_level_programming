#include "main.h"
#include <string.h>
/**
 * *_strncat -> function to append some charx
 * @dest: first para
 * @src: secound para
 * @n: third parm
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);

}