#include "main.h"

/**
 * _putuint - prints unsigned integer value to standard output
 * @val: unsigned integer value to be printed
 *
 * Return: void.
 */

void _putuint(unsigned int val)
{
	unsigned int n, m;

	n = val / 10;
	m = val % 10;
	if (val < 10)
	{
		_putchar(val + 48);
	}
	else
	{
		_putuint(n);
		_putchar(m + 48);
	}
}
