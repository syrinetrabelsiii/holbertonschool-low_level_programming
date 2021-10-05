#include "main.h"
/**
 * print_alphabet_x10 - print alphabets
 * Return: void
 */
vod print_alphabet_x10(void)
{
	int n, i;

	for (i = 0; i < 10; i++)
	{
	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	putchar('\n');
	}
}
