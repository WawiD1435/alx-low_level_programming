#include <stdio.h>

/**
 * main- Entry point
 * Description: print single digit numbers
 * Return: always 0 (Sucess)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf(""\n);
	return (0);
}
