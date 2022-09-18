#include "main.h"
/**
 * print_square - print numbers
 * @size: number of time line is printed
 *
 * Description: print 0 to 9
 * Return: 0 successfully
 */
void print_square(int size)
{
	int x;
	int f;

	if (n >= 1)
	{
		for (f = 0; f < size; f++)
		{
			for (x = 0; x < size; x++)
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
