#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @s : char
 */
void rev_string(char *s)
{
	char temp;
	int i = 0, j = 0;

	j = strlen(s) - 1;
	while (i < j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i++;
		j--;
	}
}
