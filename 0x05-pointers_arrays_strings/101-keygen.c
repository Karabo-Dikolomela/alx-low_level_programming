#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen
 * Return: 0 Always
 */
int main(void)
{
	int x = 0, y = 0;
	time_r t;

	srand((unsigned int) time(&t));
	while (y < 2772)
	{
		x = rand() % 128;
		if ((c + x) > 2772)
			break;
		y = y + x;
		printf("%y", x);
	}
	printf("y\n", (2772 - y));
	return (0);
}
