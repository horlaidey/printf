#include "main.h"
/**
 * _binary - converts an unsigned integer to binary
 * @list: string input from stdarg
 * @buff: pointer to string buffer
 * @index: position of the char in the buffer
 *
 * Return: Numbers of printed chars
 */

int _binary(va_list list, char *buff, unsigned int index)
{
	int input, i, j, k, is_neg;
	char *binr;

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
	k = 0;
	for (j = i = 0; binr[i]; i++)
	{
		if (k == 0 && binr[i] == '1')
		{
			k = 1;
		}
		if (k == 1)
		{
			index = handle_print(buff, binr[i], index);
			j++;
		}
	}
	free(binr);
	return (j);
}
