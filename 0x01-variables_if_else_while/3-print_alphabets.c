#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
/**
 * main - prints alphabets in lowercase
 * Return: 0
 */
int main(void)

{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}
	putchar ('\n');
	return (0);
}
