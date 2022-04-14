#include <stdio.h>

/**
 * main- prints the largest prime factor number
 * Return:0
 */

int main(void)
{
	unsigned long int x = 612852475143, max, i;

	while (x % 2 == 0)
	{
		max = 2;
		x /= 2;
	}
	for (i = 3; i <= x / 2; i += 2)
	{
		while (x % i == 0)
		{
			max = i;
			x /= i;
		}
	}
	if (x > 2)
	{
		max = x;
	}
	printf("%ld\n", max);

	return (0);
}


