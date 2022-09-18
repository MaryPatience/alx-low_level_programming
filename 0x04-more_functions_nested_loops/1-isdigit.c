#include "main.h"
/**
 * _isdigit - capital letters
 * @c: variable
 *
 * Description: show us capital letters
 * Return: 0  well run successfully
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
