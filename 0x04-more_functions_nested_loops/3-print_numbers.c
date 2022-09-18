#include "main.h"
/**
 * print_numbers - print numbers
 *
 * Description: print 0 to 9
 * Return: 0 successfully
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar('0' + x);
	}
	_putchar('\n');
}
