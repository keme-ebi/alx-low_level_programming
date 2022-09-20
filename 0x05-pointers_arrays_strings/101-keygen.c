#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid password
 * Return: 0
 */

int main(void)
{
	int a, b = 0, c;
	int pass[100];

	srand(time(NULL));
	for (a = 0; a < 100; a++)
	{
		pass[a] = rand() % 78;
		b += pass[a] + '0';
		putchar(pass[a] + '0');
		if ((2772 - b) - '0' < 78)
		{
			c = 2772 - b - '0';
			b += c;
			putchar(c + '0');
			break;
		}
	}
	return (0);
}
