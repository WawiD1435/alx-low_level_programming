#include "main.h"

/**
 * print_line- prints line
 * @n: integer
 *
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}