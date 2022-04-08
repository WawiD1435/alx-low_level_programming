#include <stdio.h>
/**
 * main -Entry point and prints digits of base 16
 * Return: Always 0
 */

int main(void)
{
	int num;
	char chr;

	for (num = 48; num < 58 ; num++)
		putchar(num);
	for (chr = 'a'; chr <= 'f'; chr++)
		putchar(chr);
	putchar('\n');
	return (0);
}
