#include "main.h"
/**
 * islower - checks for lowercase character
 * @c: int
 * Return: int
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
