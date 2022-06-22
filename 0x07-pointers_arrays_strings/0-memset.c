#include "main.h"

/**
 * _memset -> this function fills the memory with constant byte
 * @s: The pointer to the memore area
 * @b: The constant byte
 * @n: The number of bytes to fill the memory with
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
