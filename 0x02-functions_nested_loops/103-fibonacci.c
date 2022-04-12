#include <stdio.h>

/**
 * main -Entry point
 * Description: print sum of even valued terms of fibonnaci series
 *
 * Return: 0(sucess);
 */

int main(void)
{
	int i = 1, j = 2, k = 0, total = 0;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			total += j;
		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", total);
	return (0);
}

