#include "main.h"
#include <stdio.h>
/**
 * print_array - reseting
 * @*a: our pointer
 * @a: the actual parameter
 * @n: number of times
 *
 * Description: change its value
 * Return: 0 Always
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j == n - 1)
		{
			printf("%d", *(a++));
		}
		else
		{
			printf("%d, ", *(a++));
		}
	}
	_putchar('\n');
}
