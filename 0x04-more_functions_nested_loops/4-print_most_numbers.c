#include "main.h"
/**
 * print_most_numbers - print numbers
 *
 * Description: print 0 to 9
 * Return: 0 successfully
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		_putchar('0' + n);
	}
	_putchar('\n');
}
