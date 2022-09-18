#include "main.h"
/**
 * print_triangle - print numbers
 * @size: number of time line is printed
 *
 * Description: print 0 to 9
 * Return: 0 successfully
 */
void print_triangle(int size)
{
	int x;
	int f;
	int sym;

	if (size >= 1)
	{
		for (f = 0; f < size; f++)
		{
			for (x = 0; x < (size - f); x++)
			{
				_putchar(' ');
			}
			for (sym = 0; sym < f; sym++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
