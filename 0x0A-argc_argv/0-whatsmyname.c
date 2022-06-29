#include "main.h"
#include <stdio.h>

/**
 * main - prints the progaram name, followed by a new line.
 * @argc: the number of arguments suppied to the program.
 * @argv: an array of pointers to the argument.
 *
 * Return: Always 0.
 */
int main (int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
