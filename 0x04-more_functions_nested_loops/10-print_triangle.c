#include "main.h"

/**
 * print_triangle - prints a  triangle
 * @size- integer for size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int space, hash, i;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (space = size - 1; space >= i; space--)
			{
				printf(" ");
			}
			for (hash = 0; hash < i; hash++)
			{
				printf("#");
			}
			printf("\n");
		}
	}
	else
		printf("\n");
}
