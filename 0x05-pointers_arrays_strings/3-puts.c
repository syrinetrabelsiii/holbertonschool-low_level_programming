#include "main.h"
/**
 * _puts - prints a string
 * @str : char
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
		i++;
	_putchar(*(str + i));
}

