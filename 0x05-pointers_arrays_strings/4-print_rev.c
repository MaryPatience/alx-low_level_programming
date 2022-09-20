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
	char *begin_ptr, *end_ptr, ch;

	len = _strlen(s);
	begin_ptr = s;
	end_ptr = s;
	for (i = 0; i < len / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;
		begin_ptr++;
		end_ptr--;
	}
	_putchar('\n');
}
