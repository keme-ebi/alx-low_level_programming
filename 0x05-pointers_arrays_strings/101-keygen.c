#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - generates random valid password
 * Return: 0
 */

int main(void)
{
	int a;
	char pass[12];
	srand((unsigned int)(time(NULL)));

	for (a = 0; a < 12; a++)
		pass[a] = 33 + rand() % 94;
	pass[a] = '\0';
	printf("%s\n", pass);
	return (0);
}
