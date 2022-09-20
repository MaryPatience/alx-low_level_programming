#include "main.h"
/**
 * _strlen - reseting
 * @*s: our pointer
 * @s: the actual parameter
 *
 * Description: change its value
 * Return: 0 Always
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
