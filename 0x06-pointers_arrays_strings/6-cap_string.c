#include "main.h"

/**
 * seperator - checks if character is a seperator
 * @c: character to be checked
 * Return: if seperator return 1, otherwise return 0;
 */

int seperator(char c)
{
	/*declaring condition switch*/
	switch (c)
	{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			return (1);
		default:
			return (0);
	}
}
/**
 * cao_string - capitalizes chars after given deliminators
 * @s: string to uppercase
 * Return: returns modified string
 */

char *cap_string(char *s)
{
	int count, upper;

	upper = -32; /*value constant 32*/
	count = 0;
	/*Start WHILE*/
	while (s[count] != '\0')
	{
		/*letters lowercase*/
		if (s[count] >= 'a' && s[count] <= 'z')
		{
			/*convert uppercase*/
			if (s[count] == *s || seperator(s[count - 1]))
			s[count] += upper;

			count++; /*Add count*/
		}
		return (s);
	}
}
