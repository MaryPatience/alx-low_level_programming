#include "main.h"
/**
 * puts2 - reseting
 * @*str: our pointer
 * @str: the actual parameter
 *
 * Description: change its value
 * Return: 0 Always
 */
void puts2(char *str)
{
	while(*str != '\0')
	{
		_putchar(*(str + 2));
	}
}
