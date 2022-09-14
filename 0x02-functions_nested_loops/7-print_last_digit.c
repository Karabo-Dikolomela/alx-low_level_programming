#include "main.h"

/**
 * print_last_digit -Prints the last digit
 * of a number
 *
 * @k: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int k)
{
	int l;

	l = k % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (-l);
	}
}
