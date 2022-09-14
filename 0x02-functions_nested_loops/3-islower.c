#include <stdio.h>
/**
 * _islower - nested loops
 *
 * Description: putchar
 * Return: 0 when it runs as expected
 * Return: 1 when lowercase
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

