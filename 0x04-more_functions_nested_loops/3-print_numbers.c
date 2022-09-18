#include "main.h"
/**
 * print_numbers - capital letters
 *
 * Description: show us capital letters
 * Return: 0  well run successfully
 */
void print_numbers(void)
{
	int x;

	if (x >= '0' && x <= '9')
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
