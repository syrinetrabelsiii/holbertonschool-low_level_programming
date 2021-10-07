#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 */
void more_numbers(void)
{
	int i, s = 0;

	while (s < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(49);
			_putchar((i % 10) + 48);
		}
		s++;
	_putchar('\n');
	}
}

