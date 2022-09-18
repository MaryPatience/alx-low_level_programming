#include "main.h"
/**
 * more_numbers - print numbers
 *
 * Description: print 0 to 9
 * Return: 0 successfully
 */
void more_numbers(void)
{
	int m;
	int n;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar('0' + n);
		}
		_putchar('\n');
	}
}
