#include <stdio.h>

/**
 * main - Entry point
 * Description: print alphabets except q and e
 * Return: Always 0(Sucess)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

