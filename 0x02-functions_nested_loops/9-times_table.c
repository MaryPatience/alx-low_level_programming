#include "main.h"
/**
 * times_table - multiplication table of 9
 *
 * Description: times 9
 * Return: Always 0
 */
void times_table(void)
{
	int rone, cone, d;

	for (rone = 0; rone <= 9; rone++)
	{
		for (cone = 0; cone <= 9; cone++)
		{
			d = cone * rone;
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
				_putchar((d % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(d + '0');
			}
			if (cone == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(44);
				_putchar(32);
			}
		}
	}
i}
