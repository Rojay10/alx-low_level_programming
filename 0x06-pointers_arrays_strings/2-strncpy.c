#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: a pointer to an char that will be updated
 * @src: a pointer to a char that will be updated
 * @n: value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
