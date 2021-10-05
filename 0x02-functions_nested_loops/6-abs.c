#include "main.h"
/**
 * abs - absolute value
 * @n: int
 * Return: n
 */
int _abs(int n)
{
	int n;
	if (n < 0)
		n = -n;
	else if (n >= 0)
		n = n;
	return (n);
}
