#include "main.h"
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
	int index1 = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index1] == leet[index2] ||
					str[index1] - 32 == leet[index2])
			{
				str[index1] = index2 + '0';
			}
		}
	}
	return (str);
}