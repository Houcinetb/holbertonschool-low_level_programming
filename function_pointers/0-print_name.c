#include "function_pointers.h"

/**
 * print_name - print name
 *
 * @name: the name
 *
 * @f: a pointer to print f
 *
 * Return: the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
