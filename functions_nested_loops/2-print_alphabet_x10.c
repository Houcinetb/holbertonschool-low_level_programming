#include "main.h"
#include <stdio.h>
/**
 *print_alphabet_x10 - Print the alphabet in lowercase, x10
 *
 *
 */
void print_alphabet_x10(void)
{
	char n;
	int j;

	for (j = 0; j < 10; j++)
	{
		n = 'a';

		while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
		_putchar('\n');
	}
}
