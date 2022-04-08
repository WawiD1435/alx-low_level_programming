#include <stdio.h>

/**
 * main - Entry point
 * Description: print lower case letters followed by upper case
 * Return: Always 0(sucess)
 */

int main(void)
{
	char lower_case = 'a';
	char upper_case;

	while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}
	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
		putchar(upper_case);
	putchar('\n');
}
