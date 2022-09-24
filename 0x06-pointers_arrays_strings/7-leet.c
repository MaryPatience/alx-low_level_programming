#include "main.h"
#define LEETIN "aAeEoOtTlL"
#define LEETOUT "4433007711"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: char pointer
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
