#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c : int
 * @i : int
 * Return: 0
 */
int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		if (c >= '0' && c <= '9')
			return (0);
	return (0);
}
