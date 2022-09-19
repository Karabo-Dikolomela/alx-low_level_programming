#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	insigned int count = 0, x = 0, y = 0, z = 1, a = 1, i;

	while (*(s + count) != '\0')
	{
		if (x > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			z *= -1;
		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (x > 0)
				a *= 10;
			x++;
		}
		count++;
	}

	for (i = count - x; i < count; i++)
	{
		y = y + ((*(s + i) - 48) * m);
		a /= 10;
	}
	return (y * z);
}
