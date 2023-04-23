#include "main.h"

/**
 * _abs - converts signed int to unsigned int
 * @num: integer value to be converted to it absolute
 *
 * Return: Absolute value of the input integer.
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (-1 * num);
	}
	else
	{
		return (num);
	}
}

/**
 * _putint - prints integer value to standard output
 * @val: integer value to be printed
 *
 * Return: void.
 */

void _putint(int val)
{
	int n, m;

	if (val >= 0)
	{
		n = val / 10;
		m = val % 10;
		if (val < 10)
		{
			_putchar(val + 48);
		}
		else
		{
			_putint(n);
			_putchar(m + 48);
		}
	}
	else
	{
		n = _abs(val);
		_putchar(45);
		_putint(n);
	}
}
