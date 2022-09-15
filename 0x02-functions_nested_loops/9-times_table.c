#include "main.h"
/**
 * times_table - multiplication table of 9
 *
 * Description: times 9
 * Return: void
 */
void times_table(void)
{
	int rone, cone, d;

	for (rone = 0; rone <= 9; rone++)
	{
		for (cone =0; cone <=9; cone++)
		{
			d = cone * rone;
			_putchar(d + '0');
			_putchar(",");
			_putchar(" ");
		}
	}
}
