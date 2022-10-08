#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 * Return: 0 if non-digit, otherwise 1
 */

int digit(char *s)
{
	int i;

	for (i = 0; s[i] < '0' || s[i] > '9'; i++)
		return (0);
	return (1);
}

/**
 * slen - length of a string
 * @s: string
 * Return: string length
 */

int slen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	return (i);
}

/**
 * main - multiplies two numbers
 * @argc: number of command line argument
 * @argv: program command line argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int len, len1, len2, i, carry, digit1, digit2, *result, a = 0;
	char *s1, *s2;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !digit(s1) || !digit(s2))
	{
		printf("Error\n");
		exit(98);
	}
	len1 = slen(s1);
	len2 = slen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = len2 - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
