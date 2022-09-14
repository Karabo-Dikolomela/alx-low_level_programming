#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int you, me;

	for (you = 0; you <= 9; you++)
	{
		for (me = 97; me <= 122; me++)
		{
			_putchar(me);
		}
		_putchar('\n');
	}
}

