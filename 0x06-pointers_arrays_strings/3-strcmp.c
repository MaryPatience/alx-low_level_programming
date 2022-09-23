#include "main.h"
/**
 * *_strcmp - concatenator
 * @*s1: string 1
 * @s1: string 1
 * @*s2: string 2
 * @s2: string 2
 *
 * Description: join 2 strings
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while true
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
		else if (s1[i] == '\0')
		{
			diff = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			diff = s1[i];
		}
		else if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
		}
		else
		{
			i++;
		}
	}
	return (diff);
}
