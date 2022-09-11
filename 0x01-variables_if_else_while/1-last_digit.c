#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints value of "Last digit of n is and is greater than 5" or "Last digit of n is and is zero" or "Last digit of n is and is less than 6 and not 0"
 *
 * Description: if statement
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is and is 0\n", n);
	}
	else if (n < 6 && n < 0)
	{
		printf("Last digit of %d is and is less than 6 and not 0\n", n);

	return (0);
}
