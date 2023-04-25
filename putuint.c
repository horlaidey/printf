#include "main.h"

/**
 * _putuint - prints unsigned integer value to standard output
 * @list: input value from stdarg
 * @buff: pointer to a string buffer
 * @index: position of the char in buffer
 *
 * Return: number of chars printed
 */

int _putuint(va_list list, char *buff, unsigned int index)
{
	unsigned int input, int_tmp, i, div;

	input = va_arg(list, unsigned int);
	int_tmp = input;
	div = 1;
	while (int_tmp > 9)
	{
		div *= 10;
		int_tmp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		index = handle_print(buff, ((input / div) % 10) + '0', index);
	}
	return (i);
}
