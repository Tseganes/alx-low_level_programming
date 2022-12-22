#include "main.h"
/**
 * reverse_array -> a function that reverse array
 * @a: array a
 * @n: an element of an array
 */
void reverse_array(int *a, int n)
{
	int j;
	int i;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}	
