#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - nested loops
 * @c: the int to print
 *
 * Description: putchar
 * Return: 0 when it runs as expected
 */
int print_last_digit(int c)
{
	_putchar((abs(c) % 10) + '0');
	return (abs(c) % 10);
}
