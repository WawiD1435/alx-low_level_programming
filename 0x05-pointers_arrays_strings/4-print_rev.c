#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: string parameter
 * Return: void
 */

void print_rev(char *s)
{
	int count;

	while (*(s + count) != '\0')
		count++;
	count--;
	while (count >= 0)
	{
		_putchar(*(s + count));
		count--;
	}
	_putchar('\n');
}

