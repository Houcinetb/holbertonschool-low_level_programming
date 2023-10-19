#include <stdio.h>
#include "main.h"
/**
 * n - prints _putchare followed by
 *  a new line
 *  Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	putchar('\n');

}
