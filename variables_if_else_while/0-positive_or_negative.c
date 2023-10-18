#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
