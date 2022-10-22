#include "mian.h"

/**
 * print_numbers - a dunction that prins the numbers
 *
 * Return: 0-9 followed by new
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
