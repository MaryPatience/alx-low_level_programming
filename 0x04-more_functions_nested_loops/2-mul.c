#include "main.h"
/**
 * mul - capital letters
 * @a: variable
 * @b: variable
 *
 * Description: show us capital letters
 * Return: 0  well run successfully
 */
int mul(int a, int b)
{
	int pdt;

	pdt = a * b;
	if (pdt < 10)
	{
		putchar('-');
	}
	if (pdt % 10 != 0)
	{
		_putchar((var / 10) + '0');
		_putchar((var % 10) + '0');
	}
	_putchar('\n');
	return (0);
}
