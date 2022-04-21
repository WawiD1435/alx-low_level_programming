#include "main.h"

/**
 * string_toupper- change lowercase string to uppercase
 * @str: string
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) > 91 && *(str + i) < 122)
			*(str + i) -= 32;
		i++;
	}
	return (str);
}
