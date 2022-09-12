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

	for (ch = 0; ch < 100; ch++)
	{
		putchar((ch / 10) + '0');
		putchar((ch % 10) + '0');
		if (ch == 89)
		{
			break;
		}
		putchar(',');
		putchar(32);
	}
	putchar('\n');
	return (0);
}
