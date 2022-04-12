#include <stdio.h>
#include "main.h"
/**
 * print_to_98- prints all natural number from n to 98
 * @n: integer type parameter
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d", i);
				printf(",");
				printf(" ");
			}
			else
				printf("%d", i);
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d", i);
				printf(",");
				printf(" ");
			}
			else
				printf("%d", i);
		}
	}
}
