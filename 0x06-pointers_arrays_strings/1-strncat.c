#include "main.h"

/**
 * _strncat -> function to append some charx
 * @dest: first param
 * @src: second param
 * @n: 3rd param
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i))
	{
		i++;
	}
	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = src[j];
		i++;
		j++;
	}
	return (dest);
}
