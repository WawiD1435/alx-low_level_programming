#include <stdio.h>

/**
 * main - Entry point and prints alphabet in reverse
 * Return: Always 0
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
