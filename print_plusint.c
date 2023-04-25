#include "main.h"
/**
 * _putpint - print integer with plus symbol
 * @list: input string
 * @buff: buffer pointer
 * @index: index for buffer pointer
 * Return: number of chars printed
 */
int _putpint(va_list list, char *buff, unsigned int index)
{
	int int_input;
	unsigned int int_in, int_temp, i, div;

	int_input = va_arg(list, int);
	if (int_input < 0)
	{
		int_in = int_input * -1;
		index = handle_print(buff, '-', index);
	}
	else
	{
		int_in = int_input;
		index = handle_print(buff, '+', index);
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
	return (i + 1);
}
