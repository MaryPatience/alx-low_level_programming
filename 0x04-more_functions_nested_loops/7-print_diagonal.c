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

	if (n >= 1)
	{
		for (f = 0; f < n; f++)
		{
			for (x = 0; x < f; x++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
