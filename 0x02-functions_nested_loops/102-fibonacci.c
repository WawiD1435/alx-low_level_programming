#include <stdio.h>

/**
 * main- Entry point
 * Description: prints first 50 fibonnaci numbers
 *
 * Return: 0(suces)
 */
int main(void)
{
	unsigned long int first_term = 1, second_term = 2, next_term = 0;
	int i, count = 50;

	printf("%lu, %lu, ", first_term, second_term);
	for (i = 3; i <= count; i++)
	{
		next_term = first_term + second_term;
		first_term = second_term;
		second_term = next_term;

		if (i > 2 && i < 50)
			printf("%lu, ", next_term);
		else
			printf("%lu\n", next_term);
	}
	return (0);
}

