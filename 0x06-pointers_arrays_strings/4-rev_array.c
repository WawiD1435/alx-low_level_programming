#include "main.h"

/**
 * reverse_array- reverse an array of integers
 * @a: array of integers
 * @n:number of elements of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, beg = 0;
	int end = n - 1;

	while (beg < end)
	{
		tmp = *(a + beg);
		*(a + beg) = *(a + end);
		*(a + end) = tmp;
		beg++;
		end--;
	}
}
