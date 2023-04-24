#include "main.h"

/**
 * _putuint - prints unsigned integer value to standard output
 * @val: unsigned integer value to be printed
 *
 * Return: void.
 */

int _putuint(unsigned int val)
{
	unsigned int n, m;
	int i = 0;

	n = val / 10;
	m = val % 10;
	if (val < 10)
	{
		_putchar(val + 48);
		i++;
	}
	else
	{
		i++;
		_putuint(n);
		_putchar(m + 48);
	}
	return (i);
}
