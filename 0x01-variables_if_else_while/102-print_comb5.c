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
	int m;
	int n;

	for (ch = 0; ch < 10; ch++)
	{
		for (vr = 0; vr < 10; vr++)
		{
			putchar(ch + '0');
			putchar(vr + '0');
			putchar(32);
			for (m = 0; m < 10; m++)
			{
				for  (n = m + 1; n < 10; n++)
				{
					putchar(m + '0');
					putchar(n + '0');
			if (ch == 9 && vr == 9)
			{
				break;
			}
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
