#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: copy source to this buffer
 * @src: the source to be copied
 * @n: n bytes to be copied
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + j) != *(src + n))
	{
		*(dest + j) = *(src + i);
		j++;
	}
	while (j < n)
	{
		*(dest + j) = '\0';
		j++;
	}
	return (dest);
}
