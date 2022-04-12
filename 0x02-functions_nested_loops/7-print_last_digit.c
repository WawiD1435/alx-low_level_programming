#include "main.h"

/**
 * print_last_digit- prints last digit of a number
 * @num: parameter to type int
 *
 * Return: value of last digit
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (num < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');

	return (last_digit);
}
