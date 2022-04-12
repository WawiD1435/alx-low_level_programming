#include <stdio.h>

/**
 * main - prints sum of multiple of 5 or 3
 *
 * Return: 0(sucess)
 */

int main(void)
{
	int sum3 = 0, sum5 = 0, total = 0, start_num, end_num = 1024;

	for (start_num = 0; start_num < end_num; start_num++)
	{
		if ((start_num % 3) == 0)
		{
			sum3 += start_num;
		}
		else if ((start_num % 5) == 0)
		{
			sum5 += start_num;
		}
	}
	total = sum3 + sum5;
	printf("%d\n", total);
	return (0);
}


