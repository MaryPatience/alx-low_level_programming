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
	int f;

	x = 0;
	while (x < n)
	{
		if (n <= 0)
		{
			break;
		}
		else if ( n == 1)
		{
			_putchar(92);
		}
		else
		{
			for (f = 0; f < x; f++)
			{
				_putchar(' ');
			}
			_putchar(92);
		}
		x++;
	}
	_putchar('\n');
}
