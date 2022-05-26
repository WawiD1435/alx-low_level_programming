#include "main.h"

/**
 * binary_to_uint- convert binary to unsigned int
 * @b: pointer to a string of 0 and 1
 * Return: converted num, or 0 if
 * there is one or more chars that is not 0 or 1
 * b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	int base = 1, i = 0;

	if (b == NULL)
		return (0);
	while(b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	while (i >= 0)
	{
		conv += ((b[i] - '0') * base);
		base *= 2;
		i--;
	}
	return (conv);
}

