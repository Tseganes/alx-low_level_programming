#include "main.h"
/**
 * print_diagonal -> print diagonal
 * @n: integer params
 */
void print_diagonal(int n)
{
	int x, i;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i < x; i++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
