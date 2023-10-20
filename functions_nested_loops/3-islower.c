#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase character
 *
 * @c: The character to check
 *
 * Return: If lowercase= 1, else 0
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
