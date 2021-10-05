#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: int
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 127)
		return (1);
	else
		return (0);
}
