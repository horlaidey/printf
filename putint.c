#include "main.h"

/**
 * _putint - prints integer value to standard output
 * @list: input string from the stdarg
 * @buff: pointer to a string buffer
 * @index: position of the buffer
 *
 * Return: Number of printed chars
 */

int _putint(va_list list, char *buff, unsigned int index)
{
	int input;
	unsigned int int_in, int_tmp, i, div, is_neg;

	input = va_arg(list, int);
	is_neg = 0;
	if (input < 0)
	{
		int_in = input * -1;
		index = handle_print(buff, '-', index);
		is_neg = 1;
	}
	else
	{
		int_in = input;
	}
	int_tmp = int_in;
	div = 1;
	while (int_tmp > 9)
	{
		div *= 10;
		int_tmp /= 10;
	}

	for (i = 0; div > 0; div /= 10, i++)
	{
		index = handle_print(buff, ((int_in / div) % 10) + '0', index);
	}
	return (i + is_neg);
}
