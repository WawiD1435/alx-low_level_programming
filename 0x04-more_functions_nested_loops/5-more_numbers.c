#include "main.h"

/**
 * more_numbers- prints numbers from 0 to 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int count;

	while (count < 10)
	{
		int i;

		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
	}
	_putchar('\n');
}

