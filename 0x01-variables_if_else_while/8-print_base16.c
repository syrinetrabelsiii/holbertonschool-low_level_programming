#include <stdio.h>
/**
 * main - hexadecimal numbers
 * Return: 0
 */
int main(void)

{
	char c;
	int i = 0;

	for (; i < 10; i++)
		putchar(i + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
