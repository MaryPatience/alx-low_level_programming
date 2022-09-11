#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints value of "is greater than 5" or "is zero" or "is less than 6 and not 0"
 *
 * Description: if else statement
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else if (n < 6 && n < 0)
	{
		printf("Last digit of %d is and is %d less than 6 and not 0\n", n, m);

	return (0);
}
