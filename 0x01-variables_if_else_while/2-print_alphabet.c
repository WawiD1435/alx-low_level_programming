#include <stdio.h>

/**
 * main - Entry point
 * Description: print lower case alphabets
 * Return: 0 (sucess)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}

