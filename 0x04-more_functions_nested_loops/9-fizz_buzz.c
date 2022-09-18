#include <stdio.h>
#include "main.h"
/**
 * hund - print numbers
 * main - print numbers
 *
 * Description: print 0 to 9
 * Return: 0 successfully
 */
void hund(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0 && c % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (c % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (c % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", c);
		}
	}
}

int main(void)
{
	hund()
}
