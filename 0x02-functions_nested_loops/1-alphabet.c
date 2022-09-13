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

        for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
        putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
	
}

