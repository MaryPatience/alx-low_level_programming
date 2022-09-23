#include "main.h"
/**
 * *_strncpy - concatenator
 * @*dest: string 1
 * @dest: string 1
 * @*src: string 2
 * @src: string 2
 * @n: number
 *
 * Description: join 2 strings
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
