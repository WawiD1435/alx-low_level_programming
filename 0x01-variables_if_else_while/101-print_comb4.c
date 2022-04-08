#include <stdio.h>

/**
 * main- print combination of numbers to three digits
 * Return: Always 0
 */
int main(void)
{
	int ones, tens, hundreds;

	for (hundreds = 48; hundreds <= 57; hundreds++)
	{
		for (tens = (hundreds + 1); tens <= 57; tens++)
		{
			for (ones = (tens + 1); ones <= 57; ones++)
			{
				putchar(hundreds);
				putchar(tens);
				putchar(ones);

				if (hundreds != 55 || tens != 56 || ones != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
