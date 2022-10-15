#include <stdio.h>
/**
 * main - prints
 * Return: Always
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		puthchar(c);
	}

	putchar('\n');

	return (0);
}

