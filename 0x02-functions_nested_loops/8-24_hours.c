#include "main.h"
/**
 * jack_bauer - every minute of the day
 * Return: 0
 */
void jack_bauer(void)
{
	int a, j, h, m, l, k;

	for (a = 0; a < 24; a++)
	{
		l = a / 10;
		m = a % 10;
		for (j = 0; j < 60; j++)
	{
		k = j / 10;
		h = j % 10;
		_putchar(l + '0');
		_putchar(m + '0');
		_putchar(':');
		_putchar(k + '0');
		_putchar(h + '0');
		_putchar('\n');
	}
	}
}

