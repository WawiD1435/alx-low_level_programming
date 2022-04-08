#include <stdio.h>

/**
 * main - print combination of numbers
 * Return: Always 0
 */

int main(void)
{
	int tens, ones, t, o;

	for (tens = 48; tens <= 57; tens++)
	{
		for (ones = 48; ones <= 57; ones++)
		{
			for (t = tens; t <= 57; t++)
			{
				for (o = ones + 1; o <= 57; o++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(t);
					putchar(o);

					if (!((tens == 57 && ones == 56) && (t == 57 && o == 57)))
					{
						putchar(',');
						putchar(' ');
					}
				}
				o = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}


