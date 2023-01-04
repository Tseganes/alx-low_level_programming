#include "main.h"
/**
 * factorial - The factorial of a given number.
 * @n: The number to find the factorial
 *
 * Return: if n > 0 - the factorial of n.
 *         if n < 0 - 1 to indicate error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);

