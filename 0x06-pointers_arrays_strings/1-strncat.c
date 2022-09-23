#include "main.h"
/**
 * *_strncat - concatenator
 * @*dest: string 1
 * @dest: string 1
 * @*src: string 2
 * @src: string 2
 * @n: number
 *
 * Description: join 2 strings
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	char aa;
	char bb;

	*dest = aa;
	*src = bb;
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
	*dest = '\0';
	*dest = aa;
	return (aa);
}
