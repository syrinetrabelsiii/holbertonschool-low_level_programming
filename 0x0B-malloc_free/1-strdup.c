#include "main.h"
/**
 * *_strdup - Returns a pointer 
 * @str: string
 * Return: int
 */
char *_strdup(char *str)
{
	char *sc;
	int i, len = 0;
	
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	sc = malloc(sizeof(char) * (len + 1));
	if (sc == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		sc[i] = str[i];
	sc[len] = '\0';
	return (sc);
}
