#include "main.h"
#include <stdio.h>

/**
* _puts - prints a string
* @str: checker
*
* i
* Return: Always 0.
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
