#include "main.h"
/**
 * _puthuint - prints a short unsigned integer
 * @list: number to print
 * @buff: buffer pointer
 * @index: index for buffer pointer
 * Return: number of chars printed.
 */
int _puthuint(va_list list, char *buff, unsigned int index)
{
	unsigned short int int_in, int_temp, i, div;

	int_in = va_arg(list, unsigned int);

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
	return (i);
}
