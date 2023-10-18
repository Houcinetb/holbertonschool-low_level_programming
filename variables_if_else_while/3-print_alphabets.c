#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * maon - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;

	}

	c = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;

	}

	putchar('\n');

	return (0);
}
