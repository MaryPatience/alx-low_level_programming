#include "main.h"
/**
 * reverse_array - concatenator
 * @*a: string 1
 * @a: string 1
 * @*n: string 2
 * @n: string 2
 *
 * Description: join 2 strings
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2;  index--)
	{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}
}
