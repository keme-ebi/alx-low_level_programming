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

	srand((unsigned int)(time(NULL)));

	while (b < 2772)
	{
		a = rand() % 128;
		if ((b + a) > 2772)
			break;
		b = b + a;
		printf("%c", a);
	}
	printf("%c\n", (2772 - b));
	return (0);
}
