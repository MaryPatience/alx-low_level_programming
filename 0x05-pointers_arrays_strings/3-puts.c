#include "main.h"
/**
 * _puts - reseting
 * @*str: our pointer
 * @str: the actual parameter
 *
 * Description: change its value
 * Return: 0 Always
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
