#include "main.h"
/**
 * print_line - print numbers
 * @n: number of time line is printed
 *
 * Description: print 0 to 9
 * Return: 0 successfully
 */
void print_line(int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		if (n <= 0)
		{
			break;
		}
		else
		{
			_putchar('_');
			x++;
		}
	}
	_putchar('\n');
}
