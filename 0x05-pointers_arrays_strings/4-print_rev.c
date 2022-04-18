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

	for (count; count >= 0; count--)
		_putchar(*(s + count));
}

