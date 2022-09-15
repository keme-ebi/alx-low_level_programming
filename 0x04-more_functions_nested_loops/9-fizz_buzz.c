#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 *	for multiples of 3 print fizz and 5 print buzz
 * Return: always 0
 */

int main(void)
{
	int nums;

	for (nums = 1; nums <= 100; nums++)
	{
		if ((nums % 3 == 0) && (nums % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (nums % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (nums % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", nums);
		}
	}
	printf("\n");
	return (0);
}
