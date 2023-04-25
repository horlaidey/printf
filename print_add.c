#include "main.h"
#include <stdio.h>
/**
 * _putadd - prints the address of an input variable
 * @list: input address.
 * @buff: buffer pointer.
 * @index: index for buffer pointer
 *
 * Return: number of chars printed.
 */
int _putadd(va_list list, char *buff, unsigned int index)
{
	void *add;
	long int input;
	int i, len, int_tmp, is_neg;
	char *hexdec, *binr;
	char empty[] = "(nil)";

	add = (va_arg(list, void *));
	if (add == NULL)
	{
		for (i = 0; empty[i]; i++)
			index = handle_print(buff, empty[i], index);
		return (5);
	}
	input = (intptr_t)add;
	is_neg = 0;
	if (input < 0)
	{
		input = (input * -1) - 1;
		is_neg = 1;
	}
	binr = malloc(sizeof(char) * (64 + 1));
	binr = binary_array(binr, input, is_neg, 64);
	hexdec = malloc(sizeof(char) * (16 + 1));
	hexdec = hex_array(binr, hexdec, 0, 16);
	index = handle_print(buff, '0', index);
	index = handle_print(buff, 'x', index);
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

