#include "main.h"
/**
 * print_diagonal - print numbers
 * @n: number of time line is printed
 *
 * Description: print 0 to 9
 * Return: 0 successfully
 */
void print_diagonal(int n)
{
	int x;
	int f;

	x = 0;
	while (x < n)
	{
		if (n == 1)
		{
			_putchar(92);
			_putchar('\n');
		}
		else if (n >= 2)
		{
			for (f = 0; f < x; f++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
		else if (n <= 0)
		{
			_putchar('\n');
		}
		x++;
	}
}
