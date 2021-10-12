#include "main.h"
/**
 * puts_half - prints half of string
 * @str : char
 */
void puts_half(char *str)
{
	int i = 0, s = 0, n;

	while (str[i++])
		s++;
	if ((s % 2) == 0)
		n = s / 2;
	else
		n = (s + 1) / 2;
	for (i = n; i < s; i++)
		_putchar(str[i]);
	_putchar('\n');
}

