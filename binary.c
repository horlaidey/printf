#include "main.h"
/**
 * _binary - converts an unsigned integer to binary
 * @n: an unsigned input integer
 *
 * Return: Nothing
 */

void _binary(unsigned int n)
{
	unsigned int i, j;
	i = n / 2;
	j = n % 2;

	if (n < 2)
	{
		_putchar(n + 48);
	}
	else
	{
		_binary(i);
		_putchar(j + 48);
	}
}
