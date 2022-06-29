#include "main.h"
#include <stdio.h>

/**
 * main - prints the progaram name, followed by a new line.
 * @argc: the number of arguments suppied to the program.
 * @argv: an array of pointers to the argument.
 *
 * Return: Always 0.
 */
int main(int _attribute((__unused__) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
