#include "main.h"
/**
 * array_range - creats an array
 * @min: int
 * @max: int
 * @Return: int
 */
int *array_range(int min, int max)
{
	int *intarray;
	int p, j, count;

	if (min > max)
		return (NULL);
	count = ((max - min) + 1);
	intarray = malloc(count * sizeof(int));
	if (intarray == NULL)
		return (NULL);
	j = min;
	for (p = 0; p < count; p++, j++)
		intarray[p] = j;
	return (intarray);
}
