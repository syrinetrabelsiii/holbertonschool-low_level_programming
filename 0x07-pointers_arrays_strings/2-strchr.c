#include "main.h"
/**
 * _strchr -  locates a character in a string
 *
 * @s: pointer to a string
 * @c: char to find in s
 * Return: first occurrence of c in s or null if not found
 *
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
