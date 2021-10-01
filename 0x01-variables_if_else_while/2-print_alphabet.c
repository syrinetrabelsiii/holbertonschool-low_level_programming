#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <local.h>
#include <unistd.h>
/**
 * main - alphabet in lowercase
 * Return: 0
 */
int main(void)

{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
