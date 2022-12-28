#include "main.h"

/**
 * print_sign-print the sign of a number
 * @n: the int to check
 * Return: 1 and print + if n is greater than zero
 * 0 and print 0 if n is equal to 0
 * -1 and print -1 if n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	} 
	return (0);
}
