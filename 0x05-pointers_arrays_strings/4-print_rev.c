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

	len = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		_putchar(*(p + i));
	}
	_putchar('\n');
}
