#include "main.h"

/**
 * _strcmp- compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1=s2, negative if s1<s2 and positive if s1>s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, cmp = 0;

	while (cmp == 0)
	{
		if ((*(s1 + i) != '\0') && (*(s2 + i) != '\0'))
			cmp = *(s1 + i) - *(s2 + i);
		else
			break;
		i++;
	}
	return (cmp);
}

