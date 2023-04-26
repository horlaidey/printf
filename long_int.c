#include "main.h"
/**
 * _putlint - prints a long integer
 * @list: input string
 * @buff: buffer pointer
 * @index: index for buffer pointer
 * Return: number of chars printed.
 */
int _putlint(va_list list, char *buff, unsigned int index)
{
	long int input;
	unsigned long int int_in, int_temp, i, div, is_neg;

	input = va_arg(list, long int);
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

	int_temp = int_in;
	div = 1;
	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		index = handle_print(buff, ((int_in / div) % 10) + '0', index);
	}
	return (i + is_neg);
}
