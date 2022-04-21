#include "main.h"

/**
 * cap_string - capitalize all words of string
 * @s: string
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;

	if (*(s + i) >= 97 && *(s + i) <= 122)
		*(s + i) -= 32;
	i++;
	while (*(s + i) != '\0')
	{
		if ((*(s + i) >= 97 && *(s + i) <= 122)
		&& (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
			s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
			s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
			s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\t'
			|| s[i - 1] == '\n'))
			*(s + i) -= 32;
		i++;
	}
	return (s);
}

