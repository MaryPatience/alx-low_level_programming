#include "main.h"
/**
 * puts_half - reseting
 * @*str: our pointer
 * @str: the actual parameter
 *
 * Description: change its value
 * Return: 0 Always
 */
void puts_half(char *str)
{
	int i;
	int len;
	int n;
	int j;

	len = 0;
	for (i = 0; *(str + i) != '\0'; i++)
	{
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = ((len - 1) / 2) - 1;
	}
	for (j = n; str[j] != '\0'; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
