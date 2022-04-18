#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string of characters
 * Return: void
 */

void puts_half(char *str)
{
	int count = 0, index;

	while (*(str + count) != 0)
		count++;
	if (count % 2 == 0)
		index = count / 2;
	else
		index = (count - 1) / 2;
	for (index++; index < count; index++)
		_putchar(*(str + count));
	_putchar('\n');
}
