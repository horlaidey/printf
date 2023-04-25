#include "main.h"
/**
 * _putlHEX - prints a long decimal in hexadecimal
 * @list: The character to print
 * @buff: buffer pointer
 * @index: index for buffer pointer
 * Return: number of chars printed
 */
int _putlHEX(va_list list, char *buff, unsigned int index)
{
	long int input, i, is_neg, len, int_tmp;
	char *hexdec, *binr;

	input = va_arg(list, long int);
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

	binr = malloc(sizeof(char) * (64 + 1));
	binr = binary_array(binr, input, is_neg, 64);
	hexdec = malloc(sizeof(char) * (16 + 1));
	hexdec = hex_array(binr, hexdec, 1, 16);
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
	return (len);
}

