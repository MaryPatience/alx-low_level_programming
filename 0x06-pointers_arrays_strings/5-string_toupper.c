#include "main.h"
/**
 * *string_toupper - concatenator
 * @*str: string 1
 * @str : string 2
 *
 * Description: join 2 strings
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}
	}
	return (str);
}
