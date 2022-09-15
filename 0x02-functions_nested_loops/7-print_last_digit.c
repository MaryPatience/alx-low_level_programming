#include "main.h"
/**
 * print_last_digit - nested loops
 * @c: the int to print
 *
 * Description: putchar
 * Return: 0 when it runs as expected
 */
int print_last_digit(int c)
{
	int last_digit;

	if (c < 0)
	{
		last_digit = (-1 * (c % 10));
		_putchar (last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = (c % 10);
		_putchar (last_digit + '0');
		return (last_digit);
	}
}
