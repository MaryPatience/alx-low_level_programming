#include "main.h"
/**
 * *_strcat - concatenator
 * @*dest: string 1
 * @dest: string 1
 * @*src: string 2
 * @src: string 2
 *
 * Description: join 2 strings
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		 dest++;
		 src++;
	}
	*dest = '\0'
	return (*dest);
}
