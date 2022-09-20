#include "main.h"
/**
 * print_rev - reseting
 * @*s: our pointer
 * @s: the actual parameter
 *
 * Description: change its value
 * Return: 0 Always
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(s);
	for(i = len; i >= 0; i--)
	{
		_putchar(*(s+i));
	}
	_putchar('\n');
}
