#include "main.h"

/**
 * _memset -> this function fills the memory with constant byte
 * @s: the pointer to the memore area
 * @b: the constant byte
 * @n: the number of bytes to fill the memory with
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
