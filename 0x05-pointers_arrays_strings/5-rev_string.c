#include "main.h"
/**
 * rev_string - reseting
 * @*s: our pointer
 * @s: the actual parameter
 *
 * Description: change its value
 * Return: 0 Always
 */
void rev_string(char *s)
{

	int len;
	int i;

	len = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
}
