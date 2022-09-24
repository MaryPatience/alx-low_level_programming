#include "main.h"
#define LEETIN "aAeEoOtTlL"
#define LEETOUT "4433007711"
/**
 * *leet - main function
 * @*str: string 1
 * @str: string 1
 *
 * Description: join 2 strings
 * Return: Always 0
 */

char *leet(char *str)
{
	int num = 0;
	char *ret = str, *leetin = LEETIN, *leetout = LEETOUT;

	for (; *str; str++)
	{
		for (num = 0; leetin[num]; num++)
		{
			if (*str == leetin[num])
			{
				*str = leetout[num];
			}
		}
	}
	return (str);
}
