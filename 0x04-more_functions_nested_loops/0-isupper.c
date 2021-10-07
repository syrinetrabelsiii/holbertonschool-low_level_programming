#include "holberton.h"
/**
 * _isupper - checks for uppercase character
 * @c: int
 * Return: 0
 */
int _isupper(int c)

{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	if (c >= 'A' && c <= 'Z')
	return (1);
	return (0);
}
