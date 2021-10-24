#include "main.h"
/**
 * main - prints all arguments it recives
 * @argv: int
 * @argc: int
 * Return: int
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}


