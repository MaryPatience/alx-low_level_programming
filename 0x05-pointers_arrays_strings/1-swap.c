#include "main.h"
/**
 * swap_int - reseting
 * @*a: our pointer
 * @a: the actual parameter
 * @*b: our pointer
 * @b: our parameter
 *
 * Description: change its value
 * Return: 0 Always
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
