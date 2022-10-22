/*
 * * File: 9-fizz_buzz.c
 */

#include <stdio.h>

/**
 * main - Prints the numbers from 1-100, but for multiples of three,
 * Fizz is printed instead of the number, for multiples of five,
 * Buzz, and for multiples of both three and five, FizzBuzz.
 *
 * Return: Alwasy 0
 */

int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fb);
		else if (i % 3 == 0)
			printf("%s ", f);
		else if (i % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
