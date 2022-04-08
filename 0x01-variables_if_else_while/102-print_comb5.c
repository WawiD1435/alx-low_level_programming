#include <stdio.h>

/**
 * main - print combination of numbers
 * Return: Always 0
 */

int main(void)
{
	int tens, ones, t, n;

	for (tens = 48; tens <= 57; tens++)
	{
		for (ones = 48; ones <= 57; ones++)
		{
			for (t = tens; tens <= 57; t++)
			{
				for (o = ones + 1; o <= 57; o++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(t);
					putchar(o);

					if ((tens != 9 && ones != 8) && (t != 9 && o != 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				o = 48;
			}
		}
	}
}


