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
	int xy;

	for (ch = 0; ch < 8; ch++)
	{
		for (vr = ch + 1; vr < 9; vr++)
		{
			for (xy = vr + 1; xy < 10; xy++)
			{
			putchar(ch + '0');
			putchar(vr + '0');
			putchar(xy + '0');
			if (ch == 7 && vr == 8 && xy == 9)
			{
				break;
			}
			putchar(',');
			putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
