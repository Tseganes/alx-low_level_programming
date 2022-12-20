#include "main.h"
/**
 * print_array - prints n elements of an array of integer
 * @a: array to be printed
 * @n: number of elements in array
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d" , a[count]);

		if (count != (n - 1))
			printf(",");
		count++;
	}
	putchar('\n');
}
