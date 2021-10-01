#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
/**
 * main - last digit
 * Return: 0
 */
int main(void)

{
	int n; 
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	if (i > 5)
	printf("Last digit of %d is %i is greater than 5\n", n, i);
	else if (i == 0)
	printf("Last digit of %d is %i is 0\n", n, i);
	else if (i < 6 && i != 0)
	printf("Last digit of %d is %i is less than 6 and not 0\n", n, i);
	return (0);
}
