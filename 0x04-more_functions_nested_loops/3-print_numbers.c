#include "main.h"
/**
 * print_numbers - print numbers
 *
 * Description: print 0 to 9
 * Return: 0  well run successfully
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{	
		if (x >= '0' && x <= '9')
		{	
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
