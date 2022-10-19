#include "main.h"
#include <unistd.h>

/**
 * _putchar- writes the character c fro stdout
 * @c: them charater to print
 *
 * Return: o success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
