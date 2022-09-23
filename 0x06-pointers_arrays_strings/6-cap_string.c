#include "main.h"
/**
 * *cap_string - concatenator
 * @*str: string 1
 * @str : string 2
 *
 * Description: join 2 strings
 * Return: Always 0
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char a[] = "\t\n,;.!?"() { } ";

	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (i == 0)
			{
				*(str + i) -= 'a' - 'A';
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(str + i -1))
					{
						*(str + i) -= 'a' -'A';
					}
				}
			}
		}
		i++;
	}
	return (str);
}
