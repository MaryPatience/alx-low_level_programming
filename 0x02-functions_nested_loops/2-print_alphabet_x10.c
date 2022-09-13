#include <stdio.h>
/**
 * print_alphabet - nested loops
 *
 * Description: putchar
 * Return: 0 when it runs as expected
 */
void print_alphabet(void)
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

