#include <stdio.h>
/**
 * _islower - nested loops
 *
 * Description: putchar
 * Return: 0 when it runs as expected
 * Return: 1 when lowercase
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}

