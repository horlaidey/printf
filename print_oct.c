#include "main.h"
/**
 * _putoct - prints decimal number in octal
 * @list: input number from stdarg
 * @buff: buffer pointer
 * @index: index for buffer pointer
 * Return: number of chars printed.
 */
int _putoct(va_list list, char *buff, unsigned int index)
{
	int input, i, is_neg, len, int_tmp;
	char *oct, *binr;

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
	oct = malloc(sizeof(char) * (11 + 1));
	oct = oct_array(binr, oct);
	for (int_tmp = i = len = 0; oct[i]; i++)
	{
		if (oct[i] != '0' && int_tmp == 0)
		{
			int_tmp = 1;
		}
		if (int_tmp)
		{
			index = handle_print(buff, oct[i], index);
			len++;
		}
	}
	free(binr);
	free(oct);
	return (len);
}
