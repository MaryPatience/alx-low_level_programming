#include <stdio.h>
/**
 * print_alphabet_x10 - nested loops
 *
 * Description: putchar
 * Return: 0 when it runs as expected
 */
void print_alphabet_x10(void)
{
	int ch;
	int xy;

	xy = 0;
	while (xy < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
		xy++;
	}
}

