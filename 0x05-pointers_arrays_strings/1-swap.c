#include "main.h"

/**
 * swap_int - swaps two integers a and b
 * @a: first integer
 * @b: second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
