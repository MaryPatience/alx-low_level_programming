#include "main.h"
/**
 * print_numbers - print numbers
 *
 * Description: print 0 to 9
 * Return: 0 successfully
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar('0' + n);
	}
	_putchar('\n');
}
