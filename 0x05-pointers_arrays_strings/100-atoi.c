#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string
 * Return: integer
 */

int _atoi(char *s)
{
	int sign = 1, resp = 0, first_num, i;

	for (first_num = 0; !(s[first_num] >= 48 && s[first_num] <= 57); first_num++)
	{
		if (s[first_num == '-'])
			sign *= -1;
	}
	for (i = first_num; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}
	return (sign * resp);
}
