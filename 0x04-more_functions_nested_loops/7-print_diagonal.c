#include "main.h"
/**
 * print_diagonal - draws diagonal line
 * @n: int
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar(' ');
	}
	_putchar('\n');
}