#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int x = 0, i;
	int low_case[] = {97, 101, 111, 116, 108};
	int upp_case[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + x) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + x) == low_case[i] || *(s + x) == upp_case[i])
			{
				*(s + x) = numbers[i];
				break;
			}
		}
		x++;
	}


	return (s);
