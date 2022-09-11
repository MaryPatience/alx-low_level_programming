#include <stdio.h>
/**
 * main - base 10 with putchar function
 *
 * Description: base 1o
 * Return: 0 when it runs as expected
 */
int main(void)
{
	int ch;
	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch + '0');
		for (ch = 0; ch < 10; ch++)
		{
			putchar(ch + '0');
		}
		putchar(',');
		putchar(32);
	}
	putchar('\n');
	return (0);
}
