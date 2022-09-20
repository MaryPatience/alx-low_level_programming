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
	int count = 0;

	while (*str != '\0')
	{
		_putchar(str[count]);
		count++;
		str++;
	}
}
