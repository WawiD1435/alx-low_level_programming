#include <stdio.h>

/**
 * main - Entry point and prints single digit
 * characters using only putchar
 * Return: Always 0
 */
int  main(void)
{
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);
	putchar('\n');
	return (0);
}

