#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid password
 * Return: 0
 */

int main(void)
{
	int a = 0, b = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (a < 2772)
	{
		b = rand() % 128;
		if ((a + b) > 2772)
			break;
		a += b;
		printf("%c", b);
	}
	printf("%c\n", (2722 - a));
	return (0);
}
