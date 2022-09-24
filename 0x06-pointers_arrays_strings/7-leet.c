#include "main.h"
#define LEETIN "aAeEoOtTlL"
#define LEETOUT "4433007711"
/**
 * *leet - concatenator
 * @*str: string 1
 * @str: string 1
 *
 * Description: join 2 strings
 * Return: Always 0
 */

char *leet(char *str)
{
	int num;
	char *ret = str, *leetin = LEETIN, *leetout = LEETOUT;

	for (; *str, str++)
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			for (num = 0; leetin[num]; num++)
			{
				if (*str == leetin[num])
				{
					*str = leetout[num];
				}
			}
		}
	}
	return (str);
}
