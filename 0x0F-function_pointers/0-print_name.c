#include <stdio.h>
/**
 * void print_name - prints name
 * Return: string
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
