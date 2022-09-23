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
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
