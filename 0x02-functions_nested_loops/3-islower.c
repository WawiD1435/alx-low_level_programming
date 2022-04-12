#include "main.h"

/**
 * _islower- checks lowercase letters
 * @c: c is an argument with type int
 *
 * Return: int
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
