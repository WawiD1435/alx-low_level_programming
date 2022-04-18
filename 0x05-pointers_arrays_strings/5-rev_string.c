#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of characters
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != 0)
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * rev_string - recerses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char tmp;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
