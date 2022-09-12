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

	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch + '0');
			for (vr = 0; vr < 10; vr++)
			{
				putchar(vr + '0');
			}
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
