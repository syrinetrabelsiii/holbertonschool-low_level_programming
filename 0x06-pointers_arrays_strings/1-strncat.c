#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: char
 * @src: char
 * @n: int
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; i  <= n; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
