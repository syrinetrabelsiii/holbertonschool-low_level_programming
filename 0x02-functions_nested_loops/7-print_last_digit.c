#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @i : int
 * Return: 0
 */
int print_last_digit(int i)
{

	long x = i;
	if (x < 0)
		x = -x;
	if (x > 10)
	{
		x %= 10;
	}
	if ((x < 10) && (x != 0))
	{
		_putchar(x + '0');
		return (x);
	}
	_putchar('0');
	return (0);
}
