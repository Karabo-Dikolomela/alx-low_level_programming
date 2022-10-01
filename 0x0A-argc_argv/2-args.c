#include <stdio.h>
#include "main.h"

/**
 * main - print all received arguments.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x;

	x = 0;

	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}

	return (0);
}
