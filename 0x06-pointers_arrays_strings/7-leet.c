#include "main.h"
/**
 * leet - encodes string
 * @str: string
 * Return: encoded string
 */

char *leet(char *str)
{

	int alpha[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int num[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; alpha[i] != '\0'; i++)
		{
			if (s[j] == alpha[i])
				s[j] = num[i];
		}
	}

	return (s);
}
