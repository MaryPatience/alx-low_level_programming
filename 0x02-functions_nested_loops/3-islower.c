#include <stdio.h>
#include "main.h"
/**
 * _islower - nested loops
 * @c: the int to print
 *
 * Description: putchar
 * Return: 0 when it runs as expected
 */
int _islower(int c)
{
	if (c > 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
