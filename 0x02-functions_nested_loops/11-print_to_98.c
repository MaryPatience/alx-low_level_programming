#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function
 * @n: variable
 *i
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
			printf("%d", ch);
		}
	}	
	else if (n == 98)
	{
		 printf("%d", n);
	}
	else
	{
		for (ch = n; ch <= 98; ch++)
		{
			 printf("%d", ch);
		}
	}
}

