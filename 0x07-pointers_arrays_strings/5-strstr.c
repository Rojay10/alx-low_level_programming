#include "main.h"
#include <stdio.h>

/**
 * _strstr - description
 * @haystack: string
 * @needle: pointer
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		if (haystack[j] != needle[j - 1])
		{
			break;
		}
		if (needle[j - 1] == '\0')
		{
			return (haystack + 1);
		}
	}
	return (0);
}
