#include "main.h"

/**
 * _puthex - converts a decimal to hexadecimal
 * @list: input string from the stdarg
 * @buff: pointer to a string buffer
 * @index: index for buffer pointer
 * Return: number of chars printed
 */
int _puthex(va_list list, char *buff, unsigned int index)
{
	int input, i, is_neg, j, int_tmp;
	char *hexdec, *binr;

	input = va_arg(list, int);
	is_neg = 0;
	if (input == 0)
	{
		index = handle_print(buff, '0', index);
		return (1);
	}
	if (input < 0)
	{
		input = (input * -1) - 1;
		is_neg = 1;
	}
	binr = malloc(sizeof(char) * (32 + 1));
	binr = binary_array(binr, input, is_neg, 32);
	hexdec = malloc(sizeof(char) * (8 + 1));
	hexdec = hex_array(binr, hexdec, 0, 8);
	for (int_tmp = i = j = 0; hexdec[i]; i++)
	{
		if (hexdec[i] != '0' && int_tmp == 0)
		{
			int_tmp = 1;
		}
		if (int_tmp)
		{
			index = handle_print(buff, hexdec[i], index);
			j++;
		}
	}
	free(binr);
	free(hexdec);
	return (j);
}
