#include "main.h"
/**
 * rev_string - reseting
 * @*s: our pointer
 * @s: the actual parameter
 *
 * Description: change its value
 * Return: 0 Always
 */
void rev_string(char *s)
{
	int l, i;
	char *begin_ptr, *end_ptr, ch;

	l = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		l++;
	}
	begin_ptr = s;
	end_ptr = s;
	for (i = 0; i < l - 1; i++)
	{
		end_ptr++;
	}
	for (i = 0; i < l / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;
		begin_ptr++;
		end_ptr--;
	}

}
