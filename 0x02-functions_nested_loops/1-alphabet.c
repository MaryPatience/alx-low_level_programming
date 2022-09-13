#include <stdio.h>
/**
 * main - nested loops
 *
 * Description: putchar
 * Return: 0 when it runs as expected
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

