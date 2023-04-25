#include "main.h"
/**
 * _putnHEX - prints number in uppercase hex
 * @list: input string
 * @buff: buffer pointer
 * @index: index for buffer pointer
 * Return: number of chars printed
 */
int _putnHEX(va_list list, char *buff, unsigned int index)
{
	int input, i, is_neg, len, int_tmp;
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
	index = handle_print(buff, '0', index);
	index = handle_print(buff, 'X', index);
	binr = malloc(sizeof(char) * (32 + 1));
	binr = binary_array(binr, input, is_neg, 32);
	hexdec = malloc(sizeof(char) * (8 + 1));
	hexdec = hex_array(binr, hexdec, 1, 8);
	for (int_tmp = i = len = 0; hexdec[i]; i++)
	{
		if (hexdec[i] != '0' && int_tmp == 0)
			int_tmp = 1;
		if (int_tmp)
		{
			index = handle_print(buff, hexdec[i], index);
			len++;
		}
	}
	free(binr);
	free(hexdec);
	return (len + 2);
}
