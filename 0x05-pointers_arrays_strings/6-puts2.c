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
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(*(str * 2));
	}
}
