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
	int vr;

	for (ch = 0; ch < 99; ch++)
	{
		putchar((ch/10) + '0');
		putchar((ch%10) + '0');
		putchar(',');
		putchar(32);
		if (ch == 9)
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
