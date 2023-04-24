#include "main.h"
/**
 * _binary - converts an unsigned integer to binary
 * @n: an unsigned input integer
 *
 * Return: Nothing
 */

int _binary(unsigned int n)
{
	unsigned int i, j;
	int val = 0;

	i = n / 2;
	j = n % 2;

	if (n < 2)
	{
		_putchar(n + 48);
		val++;
	}
	else
	{
		val++;
		_binary(i);
		_putchar(j + 48);
	}
	return (val);
}
