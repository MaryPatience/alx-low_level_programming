#include "main.h"
/**
 * print_to_98 - function
 * @n: variable
 *
 * Description: natural numbers
 * Return: void
 */
void print_to_98(int n)
{
	int ch;

	if (n > 98)
	{
		for (ch = n; ch >= 98; ch--)
		{
			_putchar(ch + '0');
		}
	}	
	else if (n == 98)
	{
		_putchar((98 / 10) + '0');
		 _putchar((98 % 10) + '0');
	}
	else
	{
		for (ch = n; ch <= 98; ch++)
		{
			 _putchar(ch + '0');
		}
	}
}

