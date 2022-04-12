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
	if (n > 98)
	{
		for (int i=n; i >= 98; i--)
		{
			printf("%d", i);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else
	{
		for (int i=n; i <= 98; i++)
		{
			printf("%d", i);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
}
