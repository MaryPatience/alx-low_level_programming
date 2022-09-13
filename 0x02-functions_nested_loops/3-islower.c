#include <stdio.h>
/**
 * _islower - nested loops
 *
 * Description: putchar
 * Return: 0 when it runs as expected
 */
int _islower(int c)
{
	int c;

	if (c > 96 && c < 123)
	{
		putchar(c);
		return (1);
	}
	else
	{
		putchar(c);
		return (0);
	}
}

